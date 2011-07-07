#!/usr/bin/env python
# A (bad) Bejeweled 2 solver
# by Phillip Berndt, 2010
#
import gtk.gdk
import struct
import time
import os
from numpy import *

# Take a screenshot
#os.system("screencapture screen.png")
pixbuf	= gtk.gdk.pixbuf_new_from_file('screen.png')
width	= pixbuf.get_width()
height	= pixbuf.get_height()
data 	= pixbuf.get_pixels_array()

# Search for upper-left side of field
# Generated using C-Sourcecode output mode of The GIMP
search = array(struct.unpack("108B",
  "\252\251\312nl\260FC\210^W\237YT\241;7\224jh\253"
  "JF\211JE\222=7{:3S81-FC\210D@\221@:\202"
  "92-92-6/+XR\236D=\204?5B;3/70,:2/OJ\235"
  "@6K;1.;3/92.70,JE\232@6C<2/;2.;4"
  "081,")).reshape(6, 6, 3)

foundAt = False
for x in arange(width):
	print "Searching ", x, "\r",
	if foundAt: break
	for y in arange(height):
		if all(data[y:(y+6), x:(x+6)] == search):
			foundAt = x, y
			break

if not foundAt:
	print "Did not find field"
else:
	print "Found field"

x=1
while (x==1):
	x+=1
	# Take another screenshot
#	pixbuf = gtk.gdk.Pixbuf(gtk.gdk.COLORSPACE_RGB, True, 8, width, height)
#	pixbuf.get_from_drawable(wnd, wnd.get_colormap(), 0, 0, 0, 0, width, height)
#	data = pixbuf.get_pixels_array()

	# Read the whole field
	gems = zeros((8, 8))
	for x in arange(8):
		for y in arange(8):
			# Go to a point somewhere inside a slot
			point = data[foundAt[1] + 37 * y + 20, foundAt[0] + 39 * x + 22]

			# These values are guesses. Could be improved. (Does not detect everything atm, but
			# abound 90%)
			if point[0] > 235 and point[1] > 120 and point[0] - 30 > point[1] and point[2] < 110:
				# Orange
				gems[y, x] = 1
			elif point[0] > 250 and point[1] < 110 and point[2] < 110:
				# Red
				gems[y, x] = 2
			elif point[0] < 120 and point[1] > 190 and point[2] < 120:
				# Green
				gems[y, x] = 3
			elif point[0] < 70 and ((point[1] < 200 and point[2] > 240) or (point[1] < 95 and point[2] > 170)):
				# Blue
				gems[y, x] = 4
			elif point[0] > 200 and point[1] > 200 and point[2] < 90:
				# Yellow
				gems[y, x] = 5
			elif (point[0] > 200 and point[1] < 110 and point[2] > 200) or (point[0] > 30 and point[1] < 10 and point[2] > 30):
				# Violet
				gems[y, x] = 6
			elif point[0] > 200 and point[1] > 200 and point[2] > 200:
				# White
				gems[y, x] = 7
			print "%d,%d:" % (x,y), str(point) + " detected as " + str(gems[y, x])

	# Determine if a move is valid
	def is_valid(field, debug=0):
		for x in arange(8):
			for y in arange(8 - 2):
				if all(field[y:y+3, x] == field[y, x]) and field[y, x] != 0:
					print "Valid because of ", field[y:y+3, x]
					return True
		for y in arange(8):
			for x in arange(8 - 2):
				if all(field[y, x:x+3] == field[y, x]) and field[y, x] != 0:
					print "Valid because of ", field[y, x:x+3]
					return True
		return False
	lastTry = False
	def dtry():
		# Try to find a valid mode
		# Just try everything and check with is_valid
		global lastTry
		for x in arange(7):
			for y in arange(8):
				cpy = gems.copy()

				tmp = cpy[y,x+1]
				cpy[y,x+1] = cpy[y,x]
				cpy[y,x] = tmp

				if is_valid(cpy):
					if lastTry != False and lastTry == (y, x, y, x+1):
						continue
					print "Valid one: "
					print cpy
					lastTry = y, x, y, x+1
					return y, x, y, x+1
		for x in arange(8):
			for y in arange(7):
				cpy = gems.copy()

				tmp = cpy[y+1,x]
				cpy[y+1,x] = cpy[y,x]
				cpy[y,x] = tmp

				if x == 7 and y == 3:
					is_valid(cpy, 1)
				if is_valid(cpy):
					if lastTry != False and lastTry == (y, x, y, x+1):
						continue
					print "Valid one: "
					print cpy
					lastTry = y, x, y, x+1
					return y, x, y+1, x
		return False
	# Choose a move to make
	res = dtry()
	print "Found at", foundAt
	print lastTry
	print gems
	print res
	if not res:
		print "Argh"
	else:
		y, x, ny, nx = res
		# Use xdotool to simulate a mouse click
		os.system("xdotool mousemove %d %d" % ( (foundAt[0] + 39 * x + 22) * 1, (foundAt[1] + 37 * y + 20) * 1 ))
		os.system("xdotool click 1")
		os.system("xdotool mousemove %d %d" % ( (foundAt[0] + 39 * nx + 22) * 1, (foundAt[1] + 37 * ny + 20) * 1 ))
		os.system("xdotool click 1")

	if res == False or res == (0, 0, 0, 1):
		# Click (possible) dialogs
		os.system("xdotool mousemove %d %d" % ( (foundAt[0] + 200) * 1, (foundAt[1] + 287) ))
		os.system("xdotool click 1")
		os.system("xdotool mousemove %d %d" % ( (foundAt[0] + 82) * 1, (foundAt[1] + 166) ))
		os.system("xdotool click 1")
		os.system("xdotool mousemove %d %d" % ( (foundAt[0] + 200) * 1, (foundAt[1] + 113) ))
		os.system("xdotool click 1")

	os.system("xdotool mousemove %d %d" % ( foundAt[0] - 10, foundAt[1]))
	time.sleep(1)

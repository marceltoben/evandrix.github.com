#!/usr/bin/python
# Copyright (C) 2007, Erich Schubert <erich@debian.org>
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA

import gtk, gtk.glade, gobject
import os, sys, time, traceback
import threading, Queue
import subprocess

def locate(file):
	path = [os.path.dirname(sys.argv[0])]
	path.extend(os.getenv("PATH",'').split(os.pathsep))
	path.append(".")
	for dir in path:
		if os.access(os.path.join(dir,file), os.F_OK):
			return os.path.join(dir, file)
	return None

if sys.platform == "win32":
	mp3valbin = locate("mp3val.exe")
else:
	mp3valbin = locate("mp3val")

class finderThread(threading.Thread):
	def __init__(self, logger=None):
		"""
		This thread will walk a directory tree, looking for MP3 files to scan.
		"""
		threading.Thread.__init__(self)

		self._queue = Queue.Queue(0)
		self.addaction = None
		self.idleaction = None
		self._shutdown = False
		self.logger = logger

		self.idle = True
	
	def run(self):
		"""
		Thread main loop
		"""
		while not self._shutdown:
			try:
				dir = self._queue.get(timeout=.1)
				self.idle = False
				self.processDir(dir)
			except Queue.Empty:
				# Do a callback if we become idle.
				if not self.idle:
					self.idle = True
					if self.idleaction:
						self.idleaction()
			except:
				sys.stderr.write("An exception occurred in the finder thread, ignoring.\n")
				traceback.print_exc()

	def log(self, level, message):
		"""
		Send a message to a logging function, if registered
		"""
		if self.logger:
			self.logger(level, message)

	def processDir(self, dir):
		"""
		Process a single directory
		"""
		if not os.access(dir, os.F_OK):
			self.log("error","Could not find directory '%s'." % dir)
			return
		#self.log("info", "Processing directory '%s'." % dir)
		# Note: it might be cleaner to do the walk ourselves, but maybe
		# it's more efficient this way, and the self.shutdown handling isn't that bad.
		for path, dirs, files in os.walk(dir):
			# when signaled shutdown, quit ASAP
			if self._shutdown: return
			for file in files:
				fullname = os.path.join(path, file)
				(fullpath, extension) = os.path.splitext(fullname)
				# add MP3 files
				if extension.lower() == ".mp3":
					try:
						self.addaction(fullname)
					except:
						pass

	def queue(self, folder):
		"""
		Add a folder to the processing queue
		"""
		self._queue.put(folder)

	def shutdown(self):
		"""
		Shutdown this thread; must be called from outside!
		"""
		self._shutdown = True
		self.join()

	def queueSize(self):
		"""
		Get queue size; not very useful though by design, since we're using os.walk()

		Not reliable, too, since we're using Queue.qsize()
		"""
		return self._queue.qsize()

class validatorThread(threading.Thread):
	def __init__(self, logger=None):
		"""
		This thread will validate files using a mp3val process
		"""
		threading.Thread.__init__(self)

		self._queue = Queue.Queue(0)
		self.doneaction = None
		self.idleaction = None
		self.callbackCanEnableWrite = None
		self._shutdown = False
		self.logger = logger
		self._fixing = False
		self._mp3val = False

		self.idle = True
	
	def run(self):
		"""
		Thread main loop
		"""
		while not self._shutdown:
			try:
				file = self._queue.get(timeout=.1)
				self.idle = False
				self.processFile(file)
			except Queue.Empty:
				# Do a callback if we become idle.
				if not self.idle:
					self.idle = True
					self.stopProcess()
					if self.idleaction:
						self.idleaction()
			except:
				sys.stderr.write("An exception occurred in the valdiator thread, ignoring.\n")
				traceback.print_exc()

	def log(self, level, message):
		"""
		Send a message to a logging function, if registered
		"""
		if self.logger:
			self.logger(level, message)

	def processFile(self, filename):
		"""
		Process a single file
		"""
		if not os.access(filename, os.F_OK):
			self.log("error","Could not find file '%s'." % filename)
			return
		#self.log("info", "Processing file '%s'." % filename)
		# TODO: write actual code
		if not self._mp3val:
			self.startProcess()

		# Pass filename to mp3val process
		self._mp3val.stdin.write(filename + "\n")

		# Handle resulting lines...
		while True:
			line = self._mp3val.stdout.readline()
			if line.startswith("Done!"): break
			if line.startswith("Analyzing file"): continue
			if line.startswith("INFO:"):
				self.log("info", line[5:].strip())
			elif line.startswith("WARNING:"):
				self.log("warning", line[8:].strip())
			elif line.startswith("ERROR:"):
				self.log("warning", line[6:].strip())
			else:
				self.log("warning", line.strip())
		try:
			self.doneaction(filename)
		except:
			pass

	def queue(self, file):
		"""
		Add a file to the processing queue
		"""
		self._queue.put(file)

	def shutdown(self):
		"""
		Shutdown this thread; must be called from outside!
		"""
		self._shutdown = True
		self.join()

	def queueSize(self):
		"""
		Get the number of unprocessed files.

		Not very reliable, since we're using Queue.qsize()
		"""
		return self._queue.qsize()

	def setFixing(self, value):
		"""
		Update the 'fix files' flag
		"""
		self._fixing = value

	def startProcess(self):
		"""
		Start a subprocess for mp3val
		"""
		assert(not self._mp3val)
		command = [mp3valbin, "-p", "-si"]
		if self._fixing:
			command.append("-f")

		# callback that changing this value is not allowed.
		if self.callbackCanEnableWrite:
			self.callbackCanEnableWrite(False)

		# start the new mp3val subprocess
		self._mp3val = subprocess.Popen( command,
			stdin=subprocess.PIPE, stdout=subprocess.PIPE, close_fds=True, universal_newlines=True
		)

	def stopProcess(self):
		"""
		Stop the mp3val subprocess
		"""
		if not self._mp3val: return
		# closing the socket should cause mp3val to quit
		self._mp3val.stdin.close()
		remaining = "".join(self._mp3val.stdout.readlines())
		if len(remaining.strip()) > 1:
			self.log("info", remaining)
		self._mp3val.wait()
		self._mp3val = None

		# callback that changing this value is not allowed.
		if self.callbackCanEnableWrite:
			self.callbackCanEnableWrite(True)

class mp3valgui:
	def __init__(self):
		"""
		UI for the mp3val MP3 validator
		"""
		# Load Glade
		gladefile = locate("mp3valgui.glade")
		if not gladefile:
			gobject.idle_add(doErrormessage, "UI description file mp3valgui.glade not found.")
			
		self.windowname = "windowMP3valGui"
		self.wTree = gtk.glade.XML(gladefile, self.windowname)

		# Signals map
		dic = {
			"mainwindowDestroy" : self.shutdown,
			"buttonQuitClicked" : self.shutdown,
			"buttonAddClicked" : self.addButton,
			"onFixingToggled" : self.toggleFixing,
		}

		# connect signals
		self.wTree.signal_autoconnect(dic)

		self.window = self.wTree.get_widget(self.windowname)
		self._messages = self.wTree.get_widget("textviewMessages").get_buffer()
		# prepare colors for list view
		self._marker = []
		self._marker.append(self._messages.create_tag('warning', background='yellow'))
		self._marker.append(self._messages.create_tag('error', background='red'))

		self.wTree.get_widget("toggleFixing").set_sensitive(True)

		self.finder = finderThread(logger=self.log)
		self.validator = validatorThread(logger=self.log)
		# link the threads
		self.finder.addaction = self.validator.queue
		self.validator.doneaction = self.updateProgress
		self.validator.callbackCanEnableWrite = self.updateCanWrite

		self._done = 0

	def log(self, level, message):
		"""
		Logging callback from threads
		This will queue (via idle_add) a logging message for the UI
		"""
		gobject.idle_add(self.logAsync, level, message)
	
	def logAsync(self, level, message):
		"""
		Append a message to the log window
		"""
		gtk.gdk.threads_enter()
		try:
			end = self._messages.get_end_iter()
			# TODO: make color-coding for messages
			if level == "warning":
				self._messages.insert_with_tags(end, "[%s] %s\n" % (level, message), self._marker[0])
			elif level == "error":
				self._messages.insert_with_tags(end, "[%s] %s\n" % (level, message), self._marker[1])
			else:
				self._messages.insert(end, "[%s] %s\n" % (level, message))
		finally:
			gtk.gdk.threads_leave()

	def updateProgress(self, filename=None):
		"""
		Update progress whenever a file was scanned.
		This will queue (via idle_add) the update for the UI
		"""
		gobject.idle_add(self.updateProgressAsync, filename)

	def updateProgressAsync(self, filename=None):
		"""
		Update the progress bar.
		"""
		gtk.gdk.threads_enter()
		try:
			self._done = self._done + 1
			todo = self._done + self.finder.queueSize() + self.validator.queueSize()
			percentage = float(self._done) / float(todo)
			progress = self.wTree.get_widget("progressbar")
			progress.set_fraction(percentage)
			progress.set_text("%d/%d (%.1f %%)" % (self._done, todo, percentage * 100))
		finally:
			gtk.gdk.threads_leave()
	
	def updateCanWrite(self, status):
		"""
		Update the "write fixed files" toggle
		This will queue (via idle_add) the update for the UI
		"""
		gobject.idle_add(self.updateCanWriteAsync, status)

	def updateCanWriteAsync(self, status):
		"""
		Update the "write fixed files" toggle button
		"""
		gtk.gdk.threads_enter()
		try:
			self.wTree.get_widget("toggleFixing").set_sensitive(status)
		finally:
			gtk.gdk.threads_leave()

	def start(self):
		self.window.show()
		self.finder.start()
		self.validator.start()

	def shutdown(self, widget):
		"""
		Trigger a shutdown of the background threads
		"""
		print "Shutting down..."
		self.window.hide()
		self.finder.shutdown()
		self.validator.shutdown()
		gtk.main_quit()

	def toggleFixing(self, widget):
		"""
		The "write changes" button was toggled.
		"""
		fixbutton = self.wTree.get_widget("toggleFixing")
		assert(fixbutton == widget)
		self.validator.setFixing(fixbutton.get_active())

	def addButton(self, widget):
		"""
		The 'add folder' button was pressed.
		"""
		chooser = gtk.FileChooserDialog("Select Folder...",
			self.window,
			gtk.FILE_CHOOSER_ACTION_SELECT_FOLDER,
			(gtk.STOCK_CANCEL, gtk.RESPONSE_CANCEL, gtk.STOCK_OPEN, gtk.RESPONSE_OK))

		response = chooser.run()
		if response == gtk.RESPONSE_OK:
			filename = chooser.get_filename()
			self.queueFinder(filename)
		chooser.destroy()

	def queueFinder(self, dirname):
		"""
		Queue a directory for the finder
		"""
		self.finder.queue(dirname)

def doErrormessage(message):
	"""
	Hackish way of displaying an error message if something didn't work
	right with the UI.
	"""
	gtk.gdk.threads_enter()
	md = gtk.MessageDialog(None, gtk.DIALOG_MODAL, gtk.MESSAGE_ERROR, gtk.BUTTONS_OK, message)
	md.run()
	md.destroy()
	gtk.gdk.threads_leave()
	gtk.main_quit()

if __name__ == "__main__":
	gtk.gdk.threads_init()
	if not mp3valbin:
		gobject.idle_add(doErrormessage, "mp3val was not found. Is it installed?")
	try:
		ui = mp3valgui()
		ui.start()
		gtk.main()
	except:
		error = traceback.format_exc()
		gobject.idle_add(doErrormessage, "An exception occurred during mp3valgui:\n"+error)
		gtk.main()

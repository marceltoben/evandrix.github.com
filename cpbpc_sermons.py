#!/usr/bin/env python
# -*- coding: utf-8 -*-

import re, sys, string, os, urllib, urllib2
from datetime import datetime

# to retrieve and rename all morning worship audio sermon mp3s for 2011 from CPBPC
def main():
	DEBUG_MODE = True		# Do not download files, only show filenames
	startDate = '01/01/11'	# dd/mm/yy format - will download files >= this date
	basePath = 'http://calvarypandan.org/'
	URL = basePath + 'mws-2011.htm'

	# Read from the object, storing the page's contents in 'source'.
	fh = urllib.urlopen(URL)
	source = fh.read()
	fh.close()

	# sanitise input source HTML links
	source = source.replace('?', '').replace('\x92', '\'')

	# only download sermons beyond from_date
	from_date = datetime.strptime(startDate, '%d/%m/%y').replace(hour=0, minute=0, second=0, microsecond=0)
	sermons = re.findall('<TD>(.*)\s*\r\n<TD>.*<A href="(/mp3/.*[0-9 _]+\.mp3)">[\x93]?([\w\s,\'_ !]+)[\x94]?' + \
				'.*(</A>)?\s*\(<A HREF="javascript:dv\(\'([\w\d_]+)_.*\'\,.*\,.*\)">[\w\s]*([\d:_-]+).*(</A>)?\).*\r\n<TD>(.*)</TD>', \
				source, flags=re.IGNORECASE)
	sermons = [ (
					parseDate(date),\
					url,\
					name.replace('\x93', '').replace('\x94', '').rstrip(),\
					_,\
					book.title(),\
					ref.replace(':','_').replace('</A>', '').replace('/A>', ''),\
					_,\
					'-TSH' if contains(speaker, "Tow") else ''
				)
				for (date, url, name, _, book, ref, _, speaker) in sermons if getDate(date) >= from_date ]

	count = 0
	for (date, filePath, name, _, book, ref, _, speaker) in sermons:
		url = re.search('/mp3/(.*)([0-9 _]+)\.mp3', filePath).group(1)
		URL = basePath + filePath
		mp3file = urllib2.urlopen(URL)
		site = urllib.urlopen(URL)
		meta = site.info()
		expected_filesize = int(meta.getheaders("Content-Length")[0])
		site.close()

		outFileName = date+'-'+name+speaker+'-'+book+ref+'.mp3'
		print outFileName

		if (DEBUG_MODE):
			continue

		# check if file exists
		if (not os.path.exists(outFileName)):
			print "\tFile not found! - downloading..."
			count = writeNewFile(mp3file, outFileName, count)
		else:
			# check if is of type 'file'
			if (not os.path.isfile(outFileName)):
				print "\tFile is not of correct type! - downloading..."
				count = writeNewFile(mp3file, outFileName, count)
			else:
				# check for correct file size
				fsize = os.path.getsize(outFileName)
				if (fsize != expected_filesize):
					print "\tIncomplete file detected! - downloading..."
					count = writeNewFile(mp3file, outFileName, count)
				else:
					print "\tFile integrity check succeeded! - skipping..."
	print ""
	print "Updated", count, "out of", len(sermons), "in total"
	sys.exit(0)

def writeNewFile(mp3file, outFileName, count):
	output = open(outFileName, 'wb')
	chunk_write(output, mp3file, report_hook=chunk_report)
	output.close()
	return count + 1

def getDate(dateString):
    date = dateString.split("<br>")[0].rstrip()
    try:
    	date = datetime.strptime(date, '%d %B %Y')
    except ValueError:
		try:
			date = datetime.strptime(date, '%d %b %Y')
		except ValueError:
			print "Error invalid date:", date
    return date

def parseDate(dateString):
    date = getDate(dateString)
    return date.strftime('%y%m%d')

def contains(theString, theQueryValue):
    return theString.find(theQueryValue) > -1

def chunk_report(bytes_so_far, chunk_size, total_size):
   percent = float(bytes_so_far) / total_size
   percent = round(percent*100, 2)
   sys.stdout.write("\tDownloaded %d of %d bytes (%0.2f%%)\r" %
       (bytes_so_far, total_size, percent))
   if bytes_so_far >= total_size:
      sys.stdout.write('\n')

def chunk_write(output, response, chunk_size=8192, report_hook=None):
   total_size = response.info().getheader('Content-Length').strip()
   total_size = int(total_size)
   bytes_so_far = 0
   while 1:
      chunk = response.read(chunk_size)
      output.write(chunk)
      bytes_so_far += len(chunk)
      if not chunk:
         break
      if report_hook:
         report_hook(bytes_so_far, chunk_size, total_size)
   return bytes_so_far

if __name__ == "__main__":
    main()

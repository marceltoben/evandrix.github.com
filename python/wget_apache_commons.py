#!/usr/bin/env python
# -*- coding: utf-8 -*-

import re, sys, string, os, urllib, urllib2
from datetime import datetime

def main():
	URL = "http://apache.favoritelinks.net/commons/"
	fh = urllib.urlopen(URL)
	source = fh.read()
	fh.close()

	plugins = re.findall(r'<img src="/icons/folder.gif" alt="\[DIR\]"> <a href="(.*)">(.*)</a>', \
				source, flags=re.IGNORECASE)
	plugins = [a for (a, b) in plugins if a == b]

	for (plugin) in plugins:
		try:
			fh = urllib.urlopen(URL + plugin + "binaries/")
			source = fh.read()
			fh.close()

			filename = re.findall(r'<img src="/icons/compressed.gif" alt="\[   \]"> <a href="(.*commons.*[0-9\.]+.*)">(.*)</a>', \
				source, flags=re.IGNORECASE)
			filename = [a for (a, b) in filename if (a == b and re.search(r'.zip$', a) != None and "example" not in a)]

			# multiple => get latest version
			if len(filename) > 1:
				filename_list = [(int(re.search(r'[A-zA-z\-]+([0-9\.]+)[\w-]+\.zip$', a).group(1).replace(".", "")), a) for a in filename]
				filename_list = sorted(filename_list, key=lambda elem:elem[1])
				iter = reversed(sorted(filename_list, key=lambda elem:elem[1]))
				(_, name) = iter.next()
				filename = [name]

			file = urllib2.urlopen(URL + plugin + "binaries/" + filename[0])

			directory = "./commons/"
			if (not os.path.exists(directory) or not os.path.isdir(directory)):
				os.mkdir(directory)

			if (not os.path.exists(directory + filename[0])):
				with open(directory + filename[0], 'wb') as output:
					chunk = file.read()
					while chunk:
						output.write(chunk)
						chunk = file.read()
		except IndexError:
			print "Failed to download", plugin.replace("/", "")
			pass

if __name__ == "__main__":
    main()

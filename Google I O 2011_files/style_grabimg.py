#!/usr/bin/env python

import os, re, urllib
from urllib2 import Request, urlopen, URLError, HTTPError

def main():
	base_url = "http://www.google.com/events/io/2011/static/css/"
	source = "style.css"
	file = open(source)

	# download images referenced in stylesheet
	for line in file:
		urls = re.findall("url\((.*)\)", line)
		if (urls and len(urls) > 0):
			fullpath = base_url + urls[0]
			filename = os.path.basename(fullpath)
			if not os.path.isfile(filename):
				stealStuff(urls[0], "", base_url)
			else:
				print "Skipping %s" % filename

	# remove relative pathnames in stylesheet
	input = open(source, 'r')
	output = open(source + ".tmp", 'w')
	for s in input:
		urls = re.findall("url\((.*)\)", s)
		if (urls and len(urls) > 0):
			img = os.path.basename(urls[0])
			output.write(re.sub("url\((.*)\)", "url(" + img + ")", s))
		else:
			output.write(s)	# otherwise leave line unchanged

	# replace original file with new stylesheet
	#os.rename(source + ".tmp", source)

def stealStuff(file_name, file_mode, base_url):
	#create the url and the request
	url = base_url + file_name
	# remove all occurrences of the '/../' pattern
	url = re.sub(r'(.*)/(.*)/[.]{2}/(.*)/(.*)', r'\1/\3/\4', url)#.replace("//","/")
	req = Request(url)

	# Open the url
	try:
		f = urlopen(req)
		print "downloading " + url

		# Open our local file for writing
		local_file = open(os.path.basename(file_name), "w" + file_mode)
		#Write to our local file
		local_file.write(f.read())
		local_file.close()

	#handle errors
	except HTTPError, e:
		print "HTTP Error:", e.code , url
		sys.exit(0)
	except URLError, e:
		print "URL Error:", e.reason , url
		sys.exit(0)

if __name__ == "__main__":
    main()

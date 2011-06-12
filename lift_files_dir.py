#!/usr/bin/env python
# -*- coding: utf-8 -*-

import re, sys, string, os, urllib, urllib2, shutil
from datetime import datetime

basePath = "."
for dir in os.listdir(basePath):
	subfolder = basePath + "/" + dir
	if (os.path.isdir(subfolder)):
		for file in os.listdir(subfolder):
			try:
				shutil.move(subfolder + "/" + file, basePath + "/" + file)
			except shutil.Error:
				pass

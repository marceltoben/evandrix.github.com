#!/usr/bin/env python
# -*- coding: utf-8 -*-

import urllib2
from BeautifulSoup import BeautifulSoup

soup = BeautifulSoup(urllib2.urlopen('http://www.timeanddate.com/worldclock/astronomy.html?n=78').read())

for row in soup('table', {'class' : 'spad'})[0].tbody('tr'):
  tds = row('td')
  print tds[0].string, tds[1].string
  # will print date and sunrise

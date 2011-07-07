#!/usr/bin/env python
"""Demonstrate mr_simple in two ways.
When called with no arguments we show the word frequency
in two strings.

When called with an argument we assume it's a directory and we
scan it for python files and save the frequency to a shelve, to
demonstrate a 'consumer' that persists the data. Then the shelve is
reopened and printed out.
"""

import mr_simple
import re
import os
import sys
import shelve

_words = re.compile( '[a-zA-Z]+')

def dummy_producer():
  """Produce test data."""
  return [("f1", "now is the time"),
          ("f2", "is the time of day def?")]

def word_count_mapper(name, value):
  """Mapper that emits a series of (word,1) tuples for
  every word in 'value'.
  """
  for w in _words.findall(value.lower()):
    yield w, 1

def word_count_reducer(name, values):
  """Reducer that sums the values."""
  return sum(values)

def print_consumer(n, v):
  """Consumer that prints out all name,value pairs we're passed."""
  print "consume: ", n, v


class FileProducer:
  """Producer that traverses a directory tree and returns
  tuples of filename,content pairs.
  """
  def __init__(self, dn):
    self.dn = dn

  def __call__(self):
    for (dirpath, dirnames, filenames) in os.walk(self.dn):
      for fn in [f for f in filenames if f.endswith('.py')]:
        full = os.path.join(dirpath, fn)
        yield full, file(full).read()

class ShelveConsumer:
  """Consumer that writes to a shelve.
  """

  def __init__(self, fn):
    self.s = shelve.open(fn, 'c')

  def __call__(self, n, v):
    self.s[n] = v

if __name__ == '__main__':
  demo = True
  if len(sys.argv) == 1:
    print "Demo"
    producer = dummy_producer
    consumer = print_consumer
  else:
    demo = False
    print "Will scan ", sys.argv[1]
    producer = FileProducer(sys.argv[1])
    os.unlink('mr.shelve')
    consumer = ShelveConsumer('mr.shelve')

  mr_simple.MrSimple(producer,
                   word_count_mapper,
                   word_count_reducer,
                   consumer)

  if not demo:
    consumer = None
    s = shelve.open('mr.shelve', 'r')
    for n,v in s.iteritems():
      print n, v


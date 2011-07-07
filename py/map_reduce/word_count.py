#!/usr/bin/env python
#word_count.py

import string
import map_reduce

def mapper(input_key,input_value):
  return [(word,1) for word in
          remove_punctuation(input_value.lower()).split()]

def remove_punctuation(s):
  return s.translate(string.maketrans("",""), string.punctuation)

def reducer(intermediate_key,intermediate_value_list):
  return (intermediate_key,sum(intermediate_value_list))

filenames = ["text/a.txt","text/b.txt","text/c.txt"]
i = {}
for filename in filenames:
  f = open(filename)
  i[filename] = f.read()
  f.close()

print map_reduce.map_reduce(i,mapper,reducer)

#!/usr/bin/env python
# map_reduce.py
#"'Defines a single function, map_reduce, which takes an input
#dictionary i and applies the user-defined function mapper to each
#(input_key,input_value) pair, producing a list of intermediate
#keys and intermediate values.  Repeated intermediate keys then
#have their values grouped into a list, and the user-defined
#function reducer is applied to the intermediate key and list of
#intermediate values.  The results are returned as a list."'

import itertools

def map_reduce(i,mapper,reducer):
  intermediate = []
  for (key,value) in i.items():
    intermediate.extend(mapper(key,value))
  groups = {}
  for key, group in itertools.groupby(sorted(intermediate),
                                      lambda x: x[0]):
    groups[key] = list([y for x, y in group])
  return [reducer(intermediate_key,groups[intermediate_key])
          for intermediate_key in groups]

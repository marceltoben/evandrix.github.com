#!/usr/bin/env python
import itertools

def MrSimple(producer,
             mapper,
             reducer,
             consumer):
  """Perform a simple, single-threaded, in-memory, map-reduce.
     Parameters are:
     producer: Function called with no args that generates series of name, value pairs to feed to the mapper.
     mapper: Function passed name, value pairs which generates a sequence of probably different
             name2,value2 pairs.  Normally the names will be strings and the values can be any reasonable object.
     reducer: Function passed name,(value1,value2,...) pairs which generates  one value which will be
          associated with the 'name'.  This function will be called after the names are sorted.
     consumer: Function passed name, value pairs - intent is this can output the data, persist it, etc.

     There is no return value.

     The expectation here is that the first 3 arguments can be generator functions.
     Also, we don't tell 'consumer' when we're done - if you have an impl that has to know
     when the map-reduce is finished then you implement this when MrSimple returns.
     """
  stage1 = []
  for n, v in producer():
    for n2, v2 in mapper(n, v):
      stage1.append((n2, v2))

  for n2, vals in itertools.groupby(sorted(stage1), lambda x: x[0]):
    # 'vals' is seq of (key,val) and all the keys are the same
    # so we just get the second part
    seconds = (second[1] for second in vals)
    consumer(n2, reducer(n2, seconds))



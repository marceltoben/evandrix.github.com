#!/usr/bin/env python

"""
Level 3

----------------------------------------

Congratulations.  You have reached the final level.

For the final task, you must find all subsets of an array
where the largest number is the sum of the remaining numbers.
For example, for an input of:

(1, 2, 3, 4, 6)

the subsets would be

1 + 2 = 3
1 + 3 = 4
2 + 4 = 6
1 + 2 + 3 = 6

Here is the list of numbers you should run your code on.
The password is the number of subsets.  In the above case the
answer would be 4.
"""
from itertools import combinations

numbers = open('numbers.csv', 'r').read().split(',')
numbers = [ int(i.strip()) for i in numbers ]

def find_subsets(lst):
    """
    find all unique sublists that added up equal match_sum.
    """
    lst.sort()
    #lst.reverse()
    flst = list(lst) #copy the list
    subs = []
    sum_matches = []

    lst.pop() #prime the pump
    for i in range(2, len(lst)):
        combs = combinations(lst, i)
        for c in combs:
            #print c
            _sum = reduce(lambda x, y: x + y, c)
            # print _sum, c
            if _sum in flst: #unique list so no sum_ will match two items
                subs.append({_sum : c})

    return subs

if __name__ == '__main__':
    #print numbers
    subs = find_subsets(numbers)
    #print subs
    print "num_subsets = %s" % len(subs)

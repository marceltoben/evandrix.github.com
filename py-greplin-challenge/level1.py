#!/usr/bin/env python

"""
Level 1

----------------------------------------

Embedded in this block of text is the password for level 2.
The password is the longest substring that is the same in reverse.

As an example, if the input was "I like racecars that go fast"
the password would be "racecar".

-- notes:
http://challenge.greplin.com/static/gettysburg.txt
"""

text = open('gettysburg.txt', 'r').read().lower()

def all_strs_of_length(text, length):
    """
    get all consecutive strings of length "length"
    in the text,
    return list
    """
    text_len = len(text)
    if text_len < length:
        return None

    strs = []
    idx = 0
    for i in range(len(text)):
        if (text_len - i) < length:
            #print 'break'
            break
        strs.append(text[i:i+length])

    return strs

def longest_rev_str(text):
    """
    return the longest substring that is the same in reverse

    returns 1st longest, not all longest
    """
    for i in range(len(text),1,-1):
#        print 'str-len:',i
        strs = all_strs_of_length(text, i)
        for s in strs:
            if s == s[::-1]: return s

if __name__ == '__main__':
    print "word = " + str(longest_rev_str(text))

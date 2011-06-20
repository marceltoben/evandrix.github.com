#!/usr/bin/env python

"""
Level 2

----------------------------------------

Congratulations.  You have reached level 2.

To get the password for level 3, write code to find the first prime
fibonacci number larger than a given minimum.  For example, the first
prime fibonacci number larger than 10 is 13.

When you are ready, go here or call this automated
number (415) 799-9454.

You will receive additional instructions at that time.  For the second portion
of this task, note that for the number 12 we consider the sum of the prime divisors
to be 2 + 3 = 5.  We do not include 2 twice even though it divides 12 twice.


---- next-part:
Step 1. Use your code to compute the smallest prime fibonacci number
	greater than 227,000.  Call this number X.

Step 2. The password for level 3 is the sum of prime divisors of (X + 1).
                                                               (parens i added)

Note: If you call the number instead, it will check your answer for step 1.


--notes
the sum of the prime divisors of last answer plus 1 .... 514230

2 3 5 61 281

2 + 3 + 5 + 61 + 281
Out[39]: 352  <--- ANSWER

"""

import math

def is_prime(num):
    """
    assume num is positive integer

    it suffices to check if every number from 2 to ceil(sqrt(A)) does not divide into A
    to establish if A is prime
    """
    for i in range(2, int(math.ceil(math.sqrt(num)))):
#    for i in range(2, num): #lazy :)
        if num % i == 0:
            return False
    return True

def prime():
    n = 2
    while True:
        if is_prime(n):
            yield n
        n += 1

def fibo():
    """a generator for Fibonacci numbers, goes to next number in series on each call"""
    a, b = 0, 1
    while True:
        yield a
        a, b = b, a + b

def next_fibo(num):
    """return the next fibo num *greater than* num"""
    f = fibo()
    next = f.next()
    while next <= num:
        next = f.next()
    return next

def next_fibo_prime(num):
    next = next_fibo(num)
    while True: #don't run away loop!
        if is_prime(next):
            return next
        next = next_fibo(next)

def first_prime_div(num):
    prm = prime()
    div = prm.next()
    while div <= num:
        if num % div == 0:
            return div
        div = prm.next()

def prime_divs(num):
    divs = []
    while True:
        div = first_prime_div(num)
        divs.append(div)
        if is_prime(num):
            break
        #print "num: %s div: %s" % (num, div)
        num /= div
    return divs

if __name__ == '__main__':
    x = next_fibo_prime(227000)
    print "X + 1: %s" % (x + 1)
    x += 1
    divs = prime_divs(x)
    print "sum(prime divisors of X+1) = %s" % reduce(lambda x, y: x + y, divs)

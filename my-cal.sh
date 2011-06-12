#!/bin/bash

# @(#) my-cal Write calendar for current month.

case $# in
0)   set `date` ; m=$2 ; y=$6 ;; # use today
1)   m=$1 ; set `date` ; y=$6 ;; # use this year
*)   m=$1 ; y=$2   ;;
esac
m=`echo $m` ; y=`echo $y`

case $m in
jan)   m=1;;
f|feb)   m=2;;
mar)   m=3;;
a|apr)   m=4;;
may)   m=5;;
jun)   m=6;;
jul)   m=7;;
a|aug)   m=8;;
s|sep)   m=9;;
o|oct)   m=10;;
n|nov)   m=11;;
d|dec)   m=12;;
[1-9]|10|11|12)   ;;
*)   y=$m ; m="" ;;   # plain year
esac

/usr/bin/cal $m $y
#!/bin/bash

# @(#) s1   Demonstrate bash, paste, my-cal

# Utility functions: print-as-echo, print-line-with-visual-space.
pe() { for i;do printf "%s" "$i";done; printf "\n"; }
pl() { pe;pe "-----" ;pe "$*"; }

month1=${1-$( date '+%m' ) }
year1=${2-$( date '+%Y' ) }
(( month2=$month1+1 ))
if [ $month2 -le 12 ]
then
  year2=$year1
else
  month2=1
  (( year2=$year1+1 ))
fi
paste -d '\t' <( ./my-cal.sh $month1 $year1 ) <( ./my-cal.sh $month2 $year2 )
exit 0
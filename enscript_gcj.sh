#!/bin/bash
YEAR=$1
PROBLEM_NAME=$2
FILE="/Users/lwy08/workspace/GoogleCodeJam/round2/$YEAR/$PROBLEM_NAME.java"
enscript -r -2 -q -B -Ec --color --word-wrap -f Courier7 -MA4 -T4 -p - "$FILE" > "$YEAR-$PROBLEM_NAME.ps"
#enscript -r -2 -q -B -C -Ec -G --color --word-wrap -f Courier7 -MA4 -T4 -p - "$FILE" > test.ps
pstopdf "$YEAR-$PROBLEM_NAME.ps"
#open -a Preview ~/Downloads/"$YEAR-$PROBLEM_NAME".pdf
rm "$YEAR-$PROBLEM_NAME.ps"

#!/bin/bash
set -xv
EXTENSION=`echo "$1" | awk -F . '{print $NF}'`
base=$(basename $1)
FILENAME=${base%.*}
enscript -q -B -C -Ec -G -E$EXTENSION --color --word-wrap -f Courier10 -MA4 -T4 -p - $1 | pstopdf -i -o ${FILENAME}.pdf

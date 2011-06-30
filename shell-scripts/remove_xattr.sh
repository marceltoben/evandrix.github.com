#!/bin/bash

for i in $(ls -Rl@ | grep '^	' | awk '{print $1}' | sort -u); \
   do echo Removing $i ... >&2;  \
   find . | xargs /usr/bin/xattr-2.6 -d $i 2>/dev/null
done

#!/bin/sh
for file in *; do
   if [ -d $file ]; then
      mv $file/* .
   fi
done

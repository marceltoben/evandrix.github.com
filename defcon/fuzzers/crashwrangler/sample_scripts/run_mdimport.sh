#!/bin/sh -x

export CW_CURRENT_CASE=$1

./exc_handler env DYLD_INSERT_LIBRARIES=/usr/lib/libgmalloc.B.dylib MALLOC_ALLOW_READS=1 MALLOC_FILL_SPACE=1 mdimport "$1"


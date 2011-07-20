#!/bin/bash
# awk -v

MY_VAR=$(cat <<EOF
Part 1
  564 32718 976
  54 2345 987 50
  432 1 75
Section 2
  281 34 1290 345
  21 8 4 3
EOF
)

echo "${MY_VAR}" | awk '
   NF==2 && $2 ~ /^[0-9]/ {  prefix = $1" "$2 }
   $1 ~ /^[0-9]/ { print prefix":"$0 }'

# line count
#| awk 'BEGIN { nl = 0; nw = 0 }
#           { nl++ ; nw += NF }
#     END   { print "Lines:", nl, "words:", nw }'

#!/bin/bash
set -ue
#http://www.elacarte.com/challenge/index.php?answer%5B%5D=0.9969&answer%5B%5D=0.0031a
#I know how to issue a GET
#curl -G -d "key=val" "http://yadayadayada"
#And I understand how to do a POST
#curl -d "key=val" "http://yadayadayada" curl -F "key=val" "http://yadayadayada"

for i in $(seq 0 10000); do
	for j in $(seq 0 10000); do
	    first=`awk 'BEGIN{printf("%0.4f", '$i' / 10000)}'`
        second=`awk 'BEGIN{printf("%0.4f", '$j' / 10000)}'`
        (curl --silent -b "PHPSESSID=fktkhbcv3k3s74q7q21fnrlo22" -G -d "answer%5B%5D=$first&answer%5B%5D=$second" "http://www.elacarte.com/challenge/index.php" | grep -qo "not correct")
        if [ $? -eq 1 ]; then
            echo $first $second
        fi
	done
	echo "."
done

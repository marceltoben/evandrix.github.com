#$ apt-get install libncurses5-dev
#$ gcc -O3 -o n-queens-anim n-queens-anim.c -lncurses
#$ ./n-queens-anim 12
#
#Step 1: compile...
#$ gcc -O3 -o n-queens n-queens.c
#
#Step 2: get a bucket full of output
#$ ./n-queens |tr -d "-, " |dd bs=9 count=1000 > list-a
#
#Step 3: remove all repeating entries.
#$ sort list-a |uniq > list-b
#
#Step 4: make vertical mirrored list
#Eg. 47526138 -> 83162574
#$ rev list-b > list-c
#
#Step 5: combine both lists and remove identical entries.
#$ cat list-b list-c |sort |uniq > list-d
#
#Step 6: make horizontal mirrored list
#Eg. 47526138 -> 52473861
#$ cat list-d | while read Z ;do echo 99999999-$Z |bc ;done > list-e
#
#Step 7: combine both lists and remove identical entries.
#$ cat list-d list-e |sort |uniq > list-final

all:
	gcc -O3 -o n-queens-anim n-queens-anim.c -lncurses

clean:
	rm -rf n-queens-anim


#
# Makefile for example programs
# Requires libdasm static lib (libdasm.a) 
#

CC      = gcc
CFLAGS  = -Wall -O3

all: das simple 

das: das.o
	$(CC) $(CFLAGS) -o das das.o ../libdasm.o
simple: simple.o
	$(CC) $(CFLAGS) -o simple simple.o ../libdasm.o
clean:
	rm -f das simple *.o


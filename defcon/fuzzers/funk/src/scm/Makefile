
BIN_DIR=../../bin/

.scm.o:

# The following lines defines a rule for GNU Make explaining how to build a
# .o file from its associated .scm file:
%.o: %.scm
	csc -c $< -o $@ $(CHICKENFLAGS)

all: remote_chicken demo1 demo2

remote_chicken: repl/remote_chicken.o
	csc -o $(BIN_DIR)remote_chicken repl/remote_chicken.o

demo1: demo1.o
	csc -o $(BIN_DIR)demo1 demo1.o

demo2: demo2.o
	csc -o $(BIN_DIR)demo2 demo2.o

clean:
	rm -f *.o repl/*.o
	rm -f $(BIN_DIR)demo1 $(BIN_DIR)demo2 $(BIN_DIR)remote_chicken


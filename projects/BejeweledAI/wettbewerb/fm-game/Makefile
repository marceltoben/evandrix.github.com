# File:		fm-game
# Info:     Makefile fuer freiesMagazin-Programmierwettbewerb
# Author:	Dominik Wagenfuehr
#

# source files
SOURCES = tile.cpp fieldpos.cpp scoredtile.cpp player.cpp gamefield.cpp game.cpp main.cpp

OBJECTS = $(SOURCES:.cpp=.o)

OUTPUT = ../fm-game.bin

# include directories
INCLUDES = -I./

# C++ compiler flags (-g -O2 -Wall)
CXXFLAGS = -O3 -Wall -DDEBUG

# compiler
CXX = g++

# library paths
LIBS = -L./

# compile flags
LDFLAGS = 

# implementation

all: $(OUTPUT)

$(OUTPUT): $(OBJECTS)
	$(CXX) -o $(OUTPUT) $(OBJECTS) $(LIBS) $(LDFLAGS)

$(OBJECTS): $(SOURCES)
	$(CXX) $(INCLUDES) -c $(SOURCES) $(CXXFLAGS)

clean:
	rm -f $(OBJECTS) $(OUTPUT)


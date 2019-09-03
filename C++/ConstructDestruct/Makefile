# Simple makefile
#
# https://stackoverflow.com/questions/2481269/how-to-make-a-simple-c-makefile
#
# Compiles, runs, and cleans ConstructDestruct.cpp
# Use TABS
#
# -f so this will succeed even if the files don't exist


ConstructDestruct: ConstructDestruct.o Cat.o
	g++ -o ConstructDestruct ConstructDestruct.o Cat.o

ConstructDestruct.o: ConstructDestruct.cpp
	g++ -c ConstructDestruct.cpp

Cat.o: Cat.cpp Cat.h
	g++ -c Cat.cpp

all: ConstructDestruct

clean:
	rm -f *.o *.exe

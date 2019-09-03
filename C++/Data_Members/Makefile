# Simple makefile
#
# https://stackoverflow.com/questions/2481269/how-to-make-a-simple-c-makefile
#
# Compiles, runs, and cleans DataMembers.cpp
# Use TABS
#
# -f so this will succeed even if the files don't exist


DataMembers: DataMembers.o Cat.o
	g++ -o DataMembers DataMembers.o Cat.o

DataMembers.o: DataMembers.cpp
	g++ -c DataMembers.cpp

Cat.o: Cat.cpp Cat.h
	g++ -c Cat.cpp

all: DataMembers

clean:
	rm -f *.o *.exe

.PHONY: clean

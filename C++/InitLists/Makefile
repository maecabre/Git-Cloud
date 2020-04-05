# Simple makefile
#
# https://stackoverflow.com/questions/2481269/how-to-make-a-simple-c-makefile
#
# Compiles, runs, and cleans InitLists.cpp
# Use TABS
#
# -f so this will succeed even if the files don't exist


InitLists: InitLists.o Person.o
	g++ -o InitLists InitLists.o Person.o

InitLists.o: InitLists.cpp
	g++ -c InitLists.cpp

Person.o: Person.cpp Person.h
	g++ -c Person.cpp

all: InitLists

clean:
	rm -f *.o *.exe

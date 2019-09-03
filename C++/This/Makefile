# Simple makefile
#
# https://stackoverflow.com/questions/2481269/how-to-make-a-simple-c-makefile
#
# Compiles, runs, and cleans This.cpp
# Use TABS
#
# -f so this will succeed even if the files don't exist


This: This.o Person.o
	g++ -o This This.o Person.o

This.o: This.cpp
	g++ -c This.cpp

Person.o: Person.cpp Person.h
	g++ -c Person.cpp

all: This

clean:
	rm -f *.o *.exe

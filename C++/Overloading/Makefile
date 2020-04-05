# Simple makefile
#
# https://stackoverflow.com/questions/2481269/how-to-make-a-simple-c-makefile
#
# Compiles, runs, and cleans Overload.cpp
# Use TABS
#
# -f so this will succeed even if the files don't exist


Overload: Overload.o Person.o
	g++ -o Overload Overload.o Person.o

Overload.o: Overload.cpp
	g++ -c Overload.cpp

Person.o: Person.cpp Person.h
	g++ -c Person.cpp

all: Overload

clean:
	rm -f *.o *.exe

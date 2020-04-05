# Simple makefile
#
# https://stackoverflow.com/questions/2481269/how-to-make-a-simple-c-makefile
#
# Compiles, runs, and cleans Classes.cpp
# Use TABS
#
# -f so this will succeed even if the files don't exist


Classes: Classes.o Cat.o
	g++ -o Classes Classes.o Cat.o

Classes.o: Classes.cpp
	g++ -c Classes.cpp

Cat.o: Cat.cpp Cat.h
	g++ -c Cat.cpp

all: Classes

clean:
	rm -f *.o *.exe

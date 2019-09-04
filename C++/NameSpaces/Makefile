# Simple makefile
#
# https://stackoverflow.com/questions/2481269/how-to-make-a-simple-c-makefile
#
# Compiles, runs, and cleans NameSpaces.cpp
# Use TABS
#
# -f so this will succeed even if the files don't exist


NameSpaces: NameSpaces.o Cat.o Animals.o
	g++ -o NameSpaces NameSpaces.o Cat.o Animals.o

NameSpaces.o: NameSpaces.cpp
	g++ -c NameSpaces.cpp

Cat.o: Cat.cpp Cat.h
	g++ -c Cat.cpp

Animals.o: Animals.cpp Animals.h
	g++ -c Animals.cpp

all: NameSpaces

clean:
	rm -f *.o *.exe

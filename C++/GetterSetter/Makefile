# Simple makefile
#
# https://stackoverflow.com/questions/2481269/how-to-make-a-simple-c-makefile
#
# Compiles, runs, and cleans GetterSetter.cpp
# Use TABS
#
# -f so this will succeed even if the files don't exist


GetterSetter: GetterSetter.o Person.o
	g++ -o GetterSetter GetterSetter.o Person.o

GetterSetter.o: GetterSetter.cpp
	g++ -c GetterSetter.cpp

Person.o: Person.cpp Person.h
	g++ -c Person.cpp

all: GetterSetter

clean:
	rm -f *.o *.exe

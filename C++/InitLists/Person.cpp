//------------------------------------------------------------------------------
// Person.cpp
//------------------------------------------------------------------------------

#include <iostream>
#include <sstream>
#include "Person.h"
using namespace std;

// Constructors set in Person.h



// Functions
string Person::toString(){
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; Age: ";
	ss << age;

	return ss.str();
}

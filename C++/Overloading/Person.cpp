//------------------------------------------------------------------------------
// Person.cpp
//------------------------------------------------------------------------------

#include <iostream>
#include <sstream>
#include "Person.h"
using namespace std;

// Constructors
Person::Person(){
	cout << "Person created" << endl;
	name = "undefined";
	age = 0;
}

Person::Person(string newName, int newAge){
	name = newName;
	age = newAge;
}

// Destructor
Person::~Person(){
	cout << "Person destroyed" << endl;
}


// Functions
string Person::toString(){
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; Age: ";
	ss << age;

	return ss.str();
}

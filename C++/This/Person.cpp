//------------------------------------------------------------------------------
// Person.cpp
//------------------------------------------------------------------------------

#include <iostream>
#include <sstream>
#include "Person.h"
using namespace std;

// Constructors
Person::Person(){
	cout << "Person destroyed" << endl;
}

Person::Person(string name, int age){

	// this->name = Object 'name' not 'name' in paramter
	this->name = name;
	this->age = age;

	cout << "Memory location of object: " << this << endl;
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

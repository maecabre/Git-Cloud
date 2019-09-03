//------------------------------------------------------------------------------
// Person.cpp
//------------------------------------------------------------------------------

#include <iostream>
#include "Person.h"
using namespace std;

// Constructor
Person::Person(){
	cout << "Person created" << endl;
	name = "George";
}

// Destructor
Person::~Person(){
	cout << "Person destroyed" << endl;
}

// Functions
void Person::setName(string newName){
	name = newName;
}

string Person::toString(){
	return "Person's name is: " + name;
}

string Person::getName(){
	return name;
}


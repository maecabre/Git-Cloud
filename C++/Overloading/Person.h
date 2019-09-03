//------------------------------------------------------------------------------
// Person.h
//------------------------------------------------------------------------------


#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using namespace std;

class Person{

private:
	string name;
	int age;

public:
	// constructors
	Person();
	Person(string newName) {name = newName; age = 0;};	// inline implementation
	Person(string newName, int newAge);

	// destructor
	~Person();

	// methods
	string toString();
};


#endif /* PERSON_H_ */
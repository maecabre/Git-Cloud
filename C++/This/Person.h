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
	Person(string name, int age);

	// destructor
	~Person();

	// methods
	string toString();
};


#endif /* PERSON_H_ */
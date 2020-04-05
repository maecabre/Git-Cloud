//------------------------------------------------------------------------------
// GetterSetter.cpp
//------------------------------------------------------------------------------

#include <iostream>
#include "Person.h"
using namespace std;

int main(){

	cout << "Starting program..." << endl;
	
	// Object container
	{
		Person person;
		person.setName("Georgina");
		cout << person.toString() << endl;
		cout << "Name of person with get method: " << person.getName() << endl;
	}
	

	cout << "Ending program..." << endl;

	return 0;
}
//------------------------------------------------------------------------------
// InitLists.cpp
// Different way of creating constructors
//------------------------------------------------------------------------------

#include <iostream>
#include "Person.h"
using namespace std;

int main(){

	cout << "Starting program..." << endl;
	
	// Object container
	{
		Person person1;
		Person person2("Bob", 42);
		Person person3("Sue", 25);

		cout << person1.toString()  << endl;
		cout << person2.toString()  << endl;
		cout << person3.toString()  << endl;

	}
	

	cout << "Ending program..." << endl;

	return 0;
}
//------------------------------------------------------------------------------
// This.cpp
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

		cout << person2.toString() << "; memory location: " << &person2 << endl;
		cout << person3.toString() << "; memory location: " << &person3 << endl;

	}
	

	cout << "Ending program..." << endl;

	return 0;
}
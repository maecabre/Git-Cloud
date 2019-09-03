//------------------------------------------------------------------------------
// ConstructDestruct.cpp
//------------------------------------------------------------------------------

#include <iostream>
#include "Cat.h"
using namespace std;

int main(){

	cout << "Starting program..." << endl;

	// Object container
	{					// Cat created
		Cat bob;
		bob.speak();
	}					// Cat destroyed
		

	cout << "Ending program..." << endl;

	return 0;
}
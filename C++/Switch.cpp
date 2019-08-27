//------------------------------------------------------------------------------
// Switch.cpp
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main(){

	int value = 4;

	const int number = 4;

	switch(value){

		// cases should be fixed values only
		case number:
			cout << "Value is 4" << endl;
			break;

		case 5:
			cout << "Value is 5" << endl;
			break;

		case 6:
			cout << "Value is 6" << endl;
			break;

		// Not required, but really want one	
		default:
			cout << "Unrecognized value" << endl;
	}

	return 0;
}
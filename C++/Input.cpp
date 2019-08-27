//------------------------------------------------------------------------------
// Input.cpp
//------------------------------------------------------------------------------

#include <iostream>

using namespace std;

int main(){


	// << writes the integer 5 to the standard output
	// >> reads an integer from the standard input

	cout << "Enter your name: " << flush;
	string input;
	cin >> input;
	cout << "You entered: " << input << endl;

	cout << "Enter a number: " << flush;
	int value;
	cin >> value;
	cout << "You entered: " << value << endl;

	return 0;
}
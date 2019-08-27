//------------------------------------------------------------------------------
// OutputtingText.cpp
//------------------------------------------------------------------------------

#include <iostream>

using namespace std;

int main(){

	// cout = output
	// endl = end line, blank new line
	// << = like '+'' in Java
	// flush = forces OS to 'flush' buffer by outputting text in buffer

	cout << "Starting program..." << flush;

	cout << "This is some text." << endl;

	cout << "Banana." << " " << "Apple." << " " << "Orange." << endl;

	cout << "This is some more text." << endl;

	return 0;
}
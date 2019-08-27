//------------------------------------------------------------------------------
// IfElse.cpp
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main(){

	// \t is a tab

	cout << "1. \tAdd new record." << endl;
	cout << "2. \tDelete record." << endl;
	cout << "3. \tView record." << endl;
	cout << "4. \tSearch record." << endl;
	cout << "5. \tQuit." << endl;

	cout << "Enter your selection > " << flush;

	int value;
	cin >> value;

	if(value < 3){
		cout << "Can't use menu options" << endl;
	} else{
		cout << "Can use menu options" << endl;
	}

	if(value == 5){
		cout << "Application quitting ..." << endl;
	} else {
		cout << "Not quitting." << endl;
	}

	return 0;
}
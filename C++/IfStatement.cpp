//------------------------------------------------------------------------------
// If.cpp
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main(){

	// << = put to
	// >> = get from

	string password = "hello";
	cout << "Enter your password > " << flush;

	string input;
	cin >> input;

	if(input == password){
		cout << "Password Accepted." << endl;
	}

	if(input != password){
		cout << "Access Denied." << endl;
	}

	return 0;
}
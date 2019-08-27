//------------------------------------------------------------------------------
// DoWhile.cpp
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main(){

	// const = value cannot be changed in the program
	const string password = "hello";
	string input;

	// it looks useless, but actually prevents repeated code
	// that normally goes before entering a while loop
	do{
		cout << "Enter your password > " << flush;
		cin >> input;

		if(input != password){
			cout << "Access denied." << endl;
		}

	} while(input != password);

	// we get here when while is false
	cout << "Password Accepted" << endl;


	return 0;
}
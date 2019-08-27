//------------------------------------------------------------------------------
// BreakContinue.cpp
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main(){

	/* break...
	for(int i = 0; i < 5; i++){

		cout << "i is: " << i << endl;

		if(i == 3){
			// break out of for-loop
			break;
		}

		cout << "Looping ..." << endl;
	}
	*/


	/* continue...
	for(int i = 0; i < 5; i++){

		cout << "i is: " << i << endl;

		if(i == 3){
			// continue, ifnores 'below' statements
			continue;
		}

		// below
		cout << "Looping ..." << endl;
	}
	*/

	const string password = "hello";
	string input;

	do{
		cout << "Enter your password > " << flush;
		cin >> input;

		if(input == password){
			break;
		} else{
			cout << "Access denied." << endl;
		}

	} while(true);

	cout << "Password Accepted" << endl;
	cout << "Program quitting ..." << endl;

	return 0;
}
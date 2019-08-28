//------------------------------------------------------------------------------
// References.cpp
// Manipulate variable values without using pointers
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

void changeSomething(double &value){
	value = 123.4;
}

int main(){

	int value1 = 8;
	int &value2 = value1;	// value2 now manipulates value1
	value2 = 10;

	cout << "Value 1: " << value1 << endl;
	cout << "Value 2: " << value2 << endl;

	double number = 4.321;
	changeSomething(number);
	cout << "Number: " << number << endl;


	return 0;
}
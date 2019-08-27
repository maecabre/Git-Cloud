//------------------------------------------------------------------------------
// StringStreams.cpp
//------------------------------------------------------------------------------

#include <iostream>
#include <sstream>
using namespace std;	// allows ability to use strings

int main(){

	string name = "Bob";
	int age = 32;

	stringstream ss;	// allocation for string

	ss << "Name is: ";		// string
	ss << name;				// int
	ss << "; Age is: ";		// string
	ss << age;				// int

	// converts to string
	string info = ss.str();

	cout << info << endl;

	return 0;
}
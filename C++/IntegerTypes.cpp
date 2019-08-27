//------------------------------------------------------------------------------
// IntegerTypes.cpp
//------------------------------------------------------------------------------

#include <iostream>
#include <limits>
// can limits.h for cplusplus reference guide

using namespace std;

int main(){

	int value = 54656;
	cout << value << endl;

	cout << "Max int value: " << INT_MAX << endl;
	cout << "Min int value: " << INT_MIN << endl;

	// Allocate for larger values
	long int lValue = 212342323;
	cout << lValue << endl;

	// Allocate for smaller values, saves memory
	short int sValue = 23434;
	cout << sValue << endl;

	// Outputs 4 for 4 bytes
	cout << "Size of int: " << sizeof(int) << endl;

	cout << "Size of short int: " << sizeof(short int) << endl;

	// Only positve values
	unsigned int uValue = 234234;
	cout << uValue << endl;

	return 0;
}
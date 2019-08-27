//------------------------------------------------------------------------------
// Pointers.cpp
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

void manipulate(double *pValue){
	cout << "2. Value of int in manipulate: " << *pValue << endl;
	*pValue = 10;
	cout << "3. Value of int in manipulate: " << *pValue << endl;
}

int main(){

	int nValue = 8;

	int* pnValue = &nValue;

	cout << "Int value: " << nValue << endl;
	cout << "Pointer to int address: " << pnValue << endl;
	cout << "Int value via pointer: " << *pnValue << endl;

	cout << "======================" << endl;
	double dValue = 123.4;

	cout << "1. dValue: " << dValue << endl;
	// Address stored in pointer variable
	manipulate(&dValue);	// Value in address changed
	cout << "4. dValue: " << dValue << endl;

	return 0;
}
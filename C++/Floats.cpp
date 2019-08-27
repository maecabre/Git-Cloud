//------------------------------------------------------------------------------
// Floats.cpp
//------------------------------------------------------------------------------

#include <iostream>
#include <iomanip> // io manipulation
using namespace std;

int main(){

	float fValue = 123.456789;

	cout << "Sizeof Float" << sizeof(float) << endl;
	cout << setprecision(20) << fixed << fValue << endl;
	// cout << fixed << fValue << endl;
	// cout << scientific << fValue << endl;

	double dValue = 123.456789;
	cout << setprecision(20) << fixed << dValue << endl;

	long double lValue = 123.45678909876543210;
	cout << setprecision(20) << fixed << lValue << endl;
	cout << "Sizeof long double: " << sizeof(lValue) << endl;



	return 0;
}
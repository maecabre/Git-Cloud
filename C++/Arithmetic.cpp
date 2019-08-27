//------------------------------------------------------------------------------
// Arithmetic.cpp
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

/*
	+
	-
	*
	/
	+=
	-=
	/=
	*=
	%
	%=
	precedence
*/

int main(){

	// either '(double) 7/2' or '7.0/2' to work properly
	double value1 = (double) 7/2;
	cout << value1 << endl;

	// If int, remainder thrown away
	int value2 = 7.3;
	cout << value2 << endl;


	int value3 = 8;
	value3 += 1; // 'value3 = value3 + 1'
	cout << value3 << endl;

	int value4 = 10;
	value4 /= 5; // 'value4 = value4 / 5'

	// % = remainder
	int value5 = 12%5;
	cout << value5 << endl;

	// Use paranthesis
	double equation = (5.3/4)+(2*6);
	cout << equation << endl;

	return 0;
}
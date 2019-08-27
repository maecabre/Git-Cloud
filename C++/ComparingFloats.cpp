//------------------------------------------------------------------------------
// ComparingFloats.cpp
//------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	float value1 = 1.1;

	if(value1 == 1.1){
		cout << "equals" << endl;
	} else {
		cout << "not equal" << endl;
	}

	// Infinite precision is impossible even in code
	// As seen below, value1 = 1.100000024, not 1.1
	cout << setprecision(10) << value1 << endl;

	return 0;
}
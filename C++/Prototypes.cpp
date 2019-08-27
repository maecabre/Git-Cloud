//------------------------------------------------------------------------------
// Prototypes.cpp
//------------------------------------------------------------------------------

/* Convention
	<> Standard Location
	"" Custom Location
*/

#include <iostream>
#include "utils.h"		// custom utils.h
using namespace std;


// Prototypes
void doSomething();



int main(){

	doSomething();
	doSomething();

	return 0;
}



void doSomething(){
	cout << "Hello" << endl;
}
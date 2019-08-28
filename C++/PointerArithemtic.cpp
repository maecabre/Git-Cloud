//------------------------------------------------------------------------------
// PointerArithmetic.cpp
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main(){

	const int NSTRINGS = 5;
	string texts[NSTRINGS] = {"one", "two", "three", "four", "five"};
	string *pTexts = texts;


//	.................................................................
//	Move pointer

	pTexts += 3;
	cout << *pTexts << endl;



	pTexts -= 2;
	cout << *pTexts << endl;


//	.................................................................
//	Increment pointer across array

	string *pEnd = &texts[NSTRINGS-1];
	pTexts = &texts[0];

	while(pTexts < pEnd + 1){
		cout << *pTexts << " " << flush;
		pTexts++;
	}
	cout << endl;


//	.................................................................
//	Arithmetic for pointer location ('long' not needed)

	pTexts = &texts[0];			// Set pTexts back to start
	long elements = (long) (pEnd - pTexts);
	cout << elements << endl;


//	.................................................................
//	Arithmetic for pointer location truncates

	pTexts = &texts[0];			// Set pTexts back to start
	pTexts += NSTRINGS/2;
	cout << *pTexts << endl;



	return 0;
}
//------------------------------------------------------------------------------
// Reversing.cpp
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main(){

//	.................................................................
//	Reversing a string using pointers and while-loop
//	(Harder and less elegant, but good for practice)

	char text[] = "hello";

	int nChars = sizeof(text) - 1;		// remove '\0' at end
	// cout << "*nChars: " << nChars << endl;

	char *pStart = text;
	char *pEnd = text + nChars - 1;

	while(pStart < pEnd){

		char save = *pStart;
		*pStart = *pEnd;
		*pEnd = save;

		pStart++;
		pEnd--;
	}
	cout << text << endl;


//	.................................................................
//	Reversing a string using pointers and for-loop
//	(Harder and less elegant, but good for practice)

	char charArray[] = "reverse";

	int numLetters = sizeof(charArray) - 1;		// not counting '\0'
	// cout << numLetters << endl;

	char *pFront = charArray;
	char *pBack = charArray + numLetters - 1;

	// cout << *pFront << endl;
	// cout << *pBack << endl;

	for(; pFront < pBack; pFront++, pBack--){
		char temp = *pFront;
		*pFront = *pBack;
		*pBack = temp;
	}
	cout << charArray << endl;

//	.................................................................
//	Reversing a string without pointers
//	(Actually, surprisingly harder)

	char fakeString[] = "Spongebob";

	int stringLength = sizeof(fakeString) - 1; // removing '\0'

	char head = fakeString[0];
	char tail = fakeString[stringLength - 1];

	for(int i = 0; i < (stringLength/2); i++){
		char temp = head;
		fakeString[i] = tail;
		fakeString[stringLength - 1 - i] = temp;
		head = fakeString[i + 1];
		tail = fakeString[stringLength - 1 - (i + 1)];
	}
	cout << fakeString << endl;



	return 0;
}
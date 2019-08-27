//------------------------------------------------------------------------------
// PointerArray.cpp
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main(){

	// Array = pointer, knows size of array
	// Pointer = pointer, doesn't know size of array
	string texts[] = {"one", "two", "three"};

	string *pTexts = texts;		// texts = &texts[0]


	// pTexts --> texts --> &texts[0]	// addresses

	// *pTexts --> texts[0] 			// strings
	// pTexts[0] --> texts[0]			// strings

	for(int i = 0; i < sizeof(texts)/sizeof(string); i++){
		cout << pTexts[i] << " " << flush;
	}

	cout << endl;

	for(int i = 0; i < sizeof(texts)/sizeof(string); i++, pTexts++){
		cout << *pTexts << " " << flush;
	}

	cout << endl;

	//---

	string *pElement = &texts[0];	// texts = &texts[0]
	string *pEnd = &texts[2];

	while(true){
		cout << *pElement << " " << flush;

		if(pElement == pEnd){
			break;
		}
		pElement++;
	}


	return 0;
}
//------------------------------------------------------------------------------
// CharArrays.cpp
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;




int main(){

//	.................................................................
//	Create a char string and output it.

	char text[] = {"hello"};	// last element is null terminator
	cout << text << endl;

//	..................................................................
//	Output all the chars with a for loop

	for(int i = 0; i < sizeof(text); i++){
		cout << i << ": " << text[i] << endl;
	}
	cout << endl;

//	.................................................................
//	Output all the chars with a while(true) loop

	int k = 0;
	while(true){

		if(text[k] == 0){break;}		// checks for null terminator

		cout << k << ": " << text[k] << endl;
		k++;
	}

	return 0;
}
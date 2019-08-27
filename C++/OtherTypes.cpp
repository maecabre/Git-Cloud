//------------------------------------------------------------------------------
// OtherTypes.cpp
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main(){

	bool bValue = true;
	cout << bValue << endl;


	char cValue = 55;	// ASCII value is 7
	cout << cValue << endl; 


	cValue = '7';
	cout << cValue << endl;
	cout << (int) cValue << endl;	// casting into int


	cout << "Size of char: " << sizeof(char) << endl;

	// represent a greater range of characters that
	// you could represent in char
	wchar_t wValue = 'i';
	cout << (char)wValue << endl;
	cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;



	return 0;
}
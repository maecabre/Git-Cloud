//------------------------------------------------------------------------------
// Const.cpp
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

class Animal{
private:
	string name;

public:
	void setName(string name){this->name = name;};

	// speak() doesn't change any private data
	// const can be added to these functions to help prevent bugs
	// good practice
	void speak() const {cout << "My name is: " << name << endl;};
};

int main(){

	const double PI = 3.141592;
	cout << PI << endl;


	Animal animal;
	animal.setName("Freddy");
	animal.speak();

	int value = 8;

//	...........................................................................

	// now pointer can only point, but cannot change numbers
	const int *pValue = &value;

	// or

	// now pointer cannot be re-assigned to point somewhere else
	// int *const pValue = &value;

	// or

	// now pointer can't change numbers, or be re-assigned
	// const int *const pValue = &value;


	return 0;
}
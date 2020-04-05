//------------------------------------------------------------------------------
// NameSpaces.cpp
//------------------------------------------------------------------------------

#include <iostream>
#include "Animals.h"
#include "Cat.h"
using namespace std;

// Can define which 'Cat' class you want to use
// by defining your namespace
// ('maecabre' or 'cats' in this case)
using namespace maecabre;

int main(){

	// From namespace listed above
	Cat cat;
	cat.speak();

	// using namespace 'maecabre'
	maecabre::Cat cat2;
	cat2.speak();

	// using namespace 'cats'
	cats::Cat cat3;
	cat3.speak();

	// using namespace for global variables
	cout << CATNAME << endl;
	cout << maecabre::CATNAME << endl;
	cout << cats::CATNAME << endl;



	return 0;
}
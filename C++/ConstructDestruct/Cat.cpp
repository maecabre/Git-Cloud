//------------------------------------------------------------------------------
// Cat.cpp
//------------------------------------------------------------------------------

#include <iostream>
#include "Cat.h"
using namespace std;

// Constructor
//	 set all beginning attributes in here i.e. 'happy'
//	 otherwise, 'happy' will be whatever is in memory
Cat::Cat(){
	cout << "Cat created" << endl;
	happy = true;
}

// Destructor
Cat::~Cat(){
	cout << "Cat destroyed" << endl;
}

void Cat::speak(){
	if(happy){
		cout << "Meouww!" << endl;
	} else{
		cout << "ssssss!" << endl;
	}
}
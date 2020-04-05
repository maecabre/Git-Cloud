//------------------------------------------------------------------------------
// Cat.cpp
//------------------------------------------------------------------------------

#include <iostream>
#include "Cat.h"
using namespace std;

void Cat::speak(){

	if(happy){
		cout << "Meouww!" << endl;
	} else{
		cout << "ssssss!" << endl;
	}
}

void Cat::makeHappy(){
	happy = true;
}

void Cat::makeSad(){
	happy = false;
}
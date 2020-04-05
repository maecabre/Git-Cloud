//------------------------------------------------------------------------------
// NewOp.cpp
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;


//	Class........................................

class Animal{
private:
	string name;

public:
	// Constructor
	Animal(){
		cout << "Animal created." << endl;
	}

	// Custom Copy Constructor
	Animal(const Animal& other) : name(other.name){
		cout << "Animal created by copying." << endl;
	}

	// Destructor
	~Animal(){
		cout << "Destructor called" << endl;
	}

	//	..........Functions..........


	void setName(string name){
		this->name = name;
	}

	// Const, does not change any private parameters
	void speak() const{
		cout << "My name is: " << name << endl;
	}
	
};

//	Stand-Alone Function.........................

// Without pointer notation
// Animal object gets detroyed when end of function is reached
// Can cause program to crash
Animal *createAnimal(){
	Animal *pAnimal = new Animal();
	pAnimal->setName("Bertie");
	return pAnimal;
}


// Main..........................................

int main(){

	Animal *pFrog = createAnimal();

	pFrog->speak();

	// 'new' called in createAnimal(), don't forget
	delete pFrog;

	return 0;
}
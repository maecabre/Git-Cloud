//------------------------------------------------------------------------------
// NewOp.cpp
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

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

int main(){

	// new, allocates memory for Animal object
	Animal *pCat1 = new Animal();

	// Pointer syntax, access functions
	pCat1->setName("Freddy");
	pCat1->speak();

	// delete, de-allocates memory (REQUIRES NEW)
	delete pCat1;

	return 0;
}
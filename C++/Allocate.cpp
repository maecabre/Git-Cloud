//------------------------------------------------------------------------------
// Allocate.cpp
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

	// Copy Constructor
	Animal(const Animal& other) : name(other.name){
		cout << "Animal created by copying." << endl;
	}

	// Destructor
	~Animal(){
		cout << "Destructor called." << endl;
	}

	// ..........Functions..........

	void setName(string name){
		this->name = name;
	}

	void speak() const{
		cout << "My name is: " << name << endl;
	}
	
};



int main(){

	//	...................................................
	// Can allocate memory for an array of objects


	Animal *pAnimal = new Animal[10];

	pAnimal[5].setName("George");
	pAnimal[5].speak();

	// deletes entire pAnimal array
	delete [] pAnimal;

	char *pMem = new char[100];
	delete [] pMem;

	//	...................................................
	// Extra char syntax trick

	char c = 'a';
	c++;					// increments to 'b'
	string name(5, c);		// string is 'bbbbb'
	cout << name << endl;

	return 0;
}
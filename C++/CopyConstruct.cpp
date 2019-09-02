//------------------------------------------------------------------------------
// CopyConstruct.cpp
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

class Animal{
private:
	string name;

public:
	Animal(){ cout << "Animal created." << endl; };
	// Our own copy constructor, otherwise C++ uses its own
	// copies the name as well here
	Animal(const Animal& other): name(other.name) {cout << "Animal created by copying." << endl;};
	void setName(string name){ this->name = name; };
	void speak() { cout << "My name is: " << name << endl; }
};

int main(){

	Animal animal1;
	animal1.setName("Freddy");

	cout << "=======animal2=======" << endl;

	Animal animal2 = animal1;	// C++ uses 'copy constructor'
	animal2.speak();
	animal2.setName("Bob");

	animal1.speak();
	animal2.speak();

	cout << "=======animal3=======" << endl;

	Animal animal3(animal1);
	animal3.speak();

	return 0;
}
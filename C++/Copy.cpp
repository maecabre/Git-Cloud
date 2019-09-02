//------------------------------------------------------------------------------
// Copy.cpp
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

class Animal{
private:
	string name;

public:
	void setName(string name){ this->name = name; };
	void speak() { cout << "My name is: " << name << endl; }
};

int main(){

	Animal animal1;
	animal1.setName("Freddy");

	// // Animal animal2 = animal1;

	// animal1.speak();
	// // animal2.speak();

	return 0;
}
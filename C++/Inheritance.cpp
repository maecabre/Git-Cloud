//------------------------------------------------------------------------------
// Inheritance.cpp
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

//-----------------------------------------------------------------------------
// Classes


// Super Class (Root Class)
class Animal{
public:
	void speak(){cout << "Grrr" << endl;}
};


// Sub Class (Extends from Super Class)
// Super Class of 'Tiger'
class Cat: public Animal{
public:
	void jump(){cout << "Cat jumping!" << endl;}
};

// Sub Class (Extends from Cat)
class Tiger: public Cat{
public:
	void attackAntelope(){cout << "Attacking!" << endl;}
};


//-----------------------------------------------------------------------------
// Main

int main(){

	Animal a;
	a.speak();

	Cat cat;
	cat.speak();
	cat.jump();

	Tiger tiger;
	tiger.speak();
	tiger.jump();
	tiger.attackAntelope();

	return 0;
}
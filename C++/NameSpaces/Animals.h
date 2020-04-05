//------------------------------------------------------------------------------
// Animals.h
//------------------------------------------------------------------------------


#ifndef ANIMALS_H_
#define ANIMALS_H_

#include <iostream>
using namespace std;

namespace maecabre{

	// namespace global variable
	const string CATNAME = "Tiddles";

	class Cat{
	public:
		Cat();
		virtual ~Cat();
		void speak();
	};

}	/* namespace maecabre */




#endif /* ANIMALS_H_ */
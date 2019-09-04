//------------------------------------------------------------------------------
// PassArrays.cpp
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

//-----------------------------------------------------------------------------
// Functions

// show1()
// need nElements, otherwise
// 'sizeof(text)' returns pointer size
void show1(const int nElements, string texts[]){

	for(int i = 0; i< nElements; i++){
		cout << texts[i] << endl;
	}
}

// show2()
// exactly the same as show1()
void show2(const int nElements, string *texts){

	for(int i = 0; i< nElements; i++){
		cout << texts[i] << endl;
	}
}

// show3()
// Same functionality, but confusing syntax
void show3(string (&texts)[3]){

	for(int i = 0; i< sizeof(texts)/sizeof(string); i++){
		cout << texts[i] << endl;
	}
}

//.........................................................
// Memory Funtions

// *getMemory()
// allocates memory for char array
char *getMemory(){
	char *pMem = new char[100];
	return pMem;
}

// freeMemory()
// frees memory for char array
void freeMemory(char *pMem){
	delete [] pMem;
}


//-----------------------------------------------------------------------------
// Main

int main(){

	string texts[] = {"apple", "orange", "banana"};

	cout << sizeof(texts) << endl;

	show3(texts);

	char *pMemory = getMemory();
	freeMemory(pMemory);

	return 0;
}
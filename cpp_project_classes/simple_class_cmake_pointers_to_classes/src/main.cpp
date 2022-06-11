// classes example
#include <iostream>
#include "shape.h"

using namespace std;


int main () 
{
	// create class object and assigned argument
	Rectangle recta (3,4);
    
	// create class object with pointers 
	Rectangle * foo, * bar, * baz;
	
	// allocate dynamic memory(heap) to bar object 
	bar = new Rectangle (5, 6);
	
	// allocate dynamic memory(heap) array of size 2 to baz object
	// and add constructor arguments using uniform initialization with braces {}
	baz = new Rectangle[2] { {3,4}, {3,6} };
	 	
	//call function using diferent expressions and operators and Print output on console
	std::cout << "recta area: " << recta.area() << endl;
	std::cout << "*foo's area: " << foo->area() << endl;
	std::cout << "*bar's area: " << bar->area() << endl;
	std::cout << "baz[0]'s area:" << baz[0].area() << endl;
	std::cout << "baz[1]'s area:" << baz[1].area() << endl;  
	
	// Free resource allocate by new operator
	delete bar;
	delete[] baz;
	
	return 0;
}

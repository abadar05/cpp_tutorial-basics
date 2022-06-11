
// The example demonstrate how to overwrite class members using constructor 
// The arguments are pass by value which are copied to the constructor parameters
// The pass by value are not good when you pass class or struct as argument. If 
// constructor is called several times it will copy the class or struct object  
// into stack memory which may causes stack overflow
// classes example
#include <iostream>
#include "shape.h"

using namespace std;


int main () 
{
	// create class object and assigned argument
	Rectangle recta (3,4);
    Rectangle rectb (5,6);
	
	//call function 
	int areaA, areaB;
	areaA = recta.area();
	areaB = rectb.area();
	
	std::cout << "recta area: " << areaA << endl;
	std::cout << "rectb area: " << areaB << endl;
	
	return 0;
}
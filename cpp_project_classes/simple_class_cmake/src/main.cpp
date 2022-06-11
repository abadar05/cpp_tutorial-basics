// classes example
#include <iostream>
#include "shape.h"

using namespace std;


int main () 
{
	// create class object 
	Rectangle rect; 
	
	// call function 
	rect.set_values(3,4);
	
	//call function 
	int area;
	area = rect.area();
	std::cout << "area: " << area;
	
	return 0;
}
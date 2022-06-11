#include <iostream>     // std::cout, std::endl
#include "shape.h"      // import class Rectangle  

// Funtion Definition
void Rectangle::set_values (int x, int y) 
{
	width = x;
	height = y;
}

// Funtion Definition 
int Rectangle::area() 
{ 
	return width*height;
}

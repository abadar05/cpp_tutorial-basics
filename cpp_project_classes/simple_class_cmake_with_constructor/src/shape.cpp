#include <iostream>     // std::cout, std::endl
#include "shape.h"      // import class Rectangle  

// Constructor Definition
Rectangle::Rectangle(int x, int y) 
{
	width = x;
	height = y;
}

// Funtion Definition 
int Rectangle::area() 
{ 
	return width*height;
}

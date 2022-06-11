#include <iostream>     // std::cout, std::endl
#include "shape.h"      // import class Rectangle  

// Constructor Definition

/* Python code 

class Rectangle:
	def __init__(x, y):
		self.width = x
		self.height = y 
		
    def area():
		return self.width * self.height
*/

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

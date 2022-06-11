/* header file for declaration of the class and functions prototype */
#ifndef SHAPE_07_23_2021_H
#define SHAPE_07_23_2021_H
  
class Rectangle 
{
    // class variables declaration
	int width = 0;
	int height = 0;
	
	public: 
		// void set_values (int x, int y); 

        // declare class constructor with two arguments
		Rectangle (int,int);
		
		// declare class constructor withiout arguments
		Rectangle ();

		// return width*height 
		int area(); 
	
}; 

#endif 
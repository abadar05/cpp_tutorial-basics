/* header file for declaration of the class and functions prototype */
#ifndef MATH_LIBRRAY_07_23_2021_H
#define MATH_LIBRRAY_07_23_2021_H

namespace MathLibrary
{  
	class Arithmetic 
	{
		// class variables define here 
	
		public:
			// return x + y 
			static double Add(double x, double y); 

			// return x - y 
			static double Subtract(double x, double y); 
			
			// return x * y 
			static double Multiply(double x, double y); 
			
			// return x / y 
			static double Divide(double x, double y); 
	}; 
}
#endif 
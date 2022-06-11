// Pointer def: A pointer variable that stores the address of another variable during its lifetime 
// Example
// The example shows how to set variables value (var1, var2) indirectly through pointers 
// also it demonstrate that a same pointer may point to different variables during its lifetime in a program
// and it repeats the process with var2 and that same pointer, mypointer.


// void pointers
// They are flexible becasue it can point to any data type
// Limitations the data pointed to by them cannot be directly dereferenced 

#include <iostream>
using namespace std;


int main ()
{
	int var1, var2;
	int * mypointer;

	mypointer = &var1;  // memory address of variable var1 assigned to pointer variable mypointer 
	*mypointer = 10;    // Then, the value pointed to by mypointer is assigned a value of 10. Because, at this moment, mypointer is pointing to the memory location of var1, this in fact modifies the value of var1
	mypointer = &var2;
	*mypointer = 20;
	cout << "firstvalue is " << var1 << endl;
	cout << "secondvalue is " << var2 << endl;
	return 0;
}
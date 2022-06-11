// extern modifier
// Example
// The extern modifier is most commonly used when there are two or more files 
// sharing the same global variables or functions as explained below.

#include <iostream>

// declare global variable
extern int count;

void write_extern(void) {
   std::cout << "Count is " << count << std::endl;
}
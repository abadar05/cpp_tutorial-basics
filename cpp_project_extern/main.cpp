// extern modifier
// Example
// The extern modifier is most commonly used when there are two or more files 
// sharing the same global variables or functions as explained below.


#include <iostream>

int count;

// declare global function 
extern void write_extern();
 
main() {
   count = 5;
   write_extern();
}
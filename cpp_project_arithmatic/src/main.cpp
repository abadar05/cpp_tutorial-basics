#include <iostream>
#include "function.h"
#include "config_handler.h"

using namespace std;

// The main method
/*
int main() 
{
   addition();
   subtraction();
   return 0;
}

*/


int main(int argc, char *argv[]) 
	{ 
		if (argc < 2) 
			{
			// report version
			//std::cout << argv[0] << " Version " << Main_VERSION_MAJOR << "." << Main_VERSION_MINOR << std::endl;
			std::cout << "Usage: " << argv[0] << " number" << std::endl;
			}
	
		addition();
		subtraction();
    
		return 1;
	
	}
	  
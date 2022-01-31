#include <iostream>
#include "lib.h"
#include <string>
#include <cmath>

int main(int argc, char** argv){
	
	string check(argv[1]);
			
	if (check == "help"){ std::cout << "To use you need to follow this format:\n"
					   "\teasarea [command] values ...\n"
					   "\n"
					   "_*_ List of comands _*_\n"
       			                   "\n"
					   "square: Calculate the area of a square (b x h)\n"
					   "triangle: Calculate the area of a tringle ((b x h) / 2)\n"
					   "circle: calculate the area of a circle (2πr^2)\n"; }

	if (check == "square"){ std::cout << parseFloat(argv[2]) * parseFloat(argv[3]) << "\n";}
	if (check == "triangle"){ std::cout << (parseFloat(argv[2]) * parseFloat(argv[3])) / 2 << "\n"; }
	if (check == "circle"){ std::cout << 2 * Pi * pow(parseFloat(argv[2]), 2) << "\n"; }

	return 0;
}

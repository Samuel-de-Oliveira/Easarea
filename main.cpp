#include <iostream>
#include "lib.h"
#include <string>
#include <cmath>

int main(int argc, char** argv){
	
	string check(argv[1]);
			
	if (check == "help"){
		std::cout <<
		"To use you need to follow this format:\n"
		"\teasarea [command] values...\n"
		"\n"
		"_*_ List of comands _*_\n"
       		"\n"
		"rectangle: Calculate the area of a rectangle (b x h) [easarea rectangle [\"b\" value here] [\"h\" value here]]\n"
		"square: Calculate the area of a square (s²) [easarea square [s value here]]"
		"triangle: Calculate the area of a tringle ((b x h) / 2) [easarea triangle [\"b\" value here] [\"h\" value here]]\n"
		"circle: calculate the area of a circle (2πr²) [easarea circle [\"r\" value here]]\n";
	}

	if (check == "rectangle"){ std::cout << parseFloat(argv[2]) * parseFloat(argv[3]) << "\n";}
	if (check == "square"){ std::cout << pow(parseFloat(argv[2]), 2) << "\n";  }
	if (check == "triangle"){ std::cout << (parseFloat(argv[2]) * parseFloat(argv[3])) / 2 << "\n"; }
	if (check == "circle"){ std::cout << 2 * Pi * pow(parseFloat(argv[2]), 2) << "\n"; }
	if (check == "")

	return 0;
}

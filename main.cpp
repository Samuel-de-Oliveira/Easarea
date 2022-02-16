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
		"square: Calculate the area of a square (s²) [easarea square [s value here]]\n"
		"triangle: Calculate the area of a tringle ((b x h) / 2) [easarea triangle [\"b\" value here] [\"h\" value here]]\n"
		"circle: Calculate the area of a circle (πr²) [easarea circle [\"r\" value here]]\n"
		"trapezium: Calculate the area of a trapezium ((B + b) * h / 2) [easarea trapezium [\"B\" value here] [\"b\" value here] [\"h\" value here]]\n"
		"diamond: Calculate the area of a diamond ((D * d) / 2) [easarea diamond [\"D\" value here] [\"b\" value here]]\n"

		"version: Show the version of program [easarea version]\n"
		"help: Show this message [easarea help]\n";
	}

	if (check == "rectangle"){ std::cout << parseFloat(argv[2]) * parseFloat(argv[3]) << "\n";}
	if (check == "square"){ std::cout << pow(parseFloat(argv[2]), 2) << "\n";  }
	if (check == "triangle" || check == "diamond"){ std::cout << (parseFloat(argv[2]) * parseFloat(argv[3])) / 2 << "\n"; }
	if (check == "circle"){ std::cout << Pi * pow(parseFloat(argv[2]), 2) << "\n"; }
	if (check == "trapezium"){ std::cout << (parseFloat(argv[2]) + parseFloat(argv[3])) * parseFloat(argv[4]) / 2 << "\n"; }
	if (check == "hypotenuse"){ std::cout << hypot(parseFloat(argv[2]), parseFloat(argv[3])) << "\n" }

	if (check == "version"){ std::cout << "Version: "<< Version << "\n";
					      "Program created by: Samuel de Oliveira\n"}

	return 0;
}

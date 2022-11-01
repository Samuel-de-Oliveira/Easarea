/*
 *  # -*- Easarea's source code -*- #
 *
 *  You can use this code to do any
 *  thing you want, you are free to
 *  do it.
 *
 *  Crated by: Samuel de Oliveira (Samuel-de-Oliviera)
 *  Code contribuitors: None
 *  Version: 1.0
 *
 */

// Import Area
#include <iostream>
#include "lib.hpp"
#include <string>
#include <cmath>

int main( int argc, char** argv ) {
	
	// if digit only program name, it shows the help message.
	if (argc == 1) helpMessage();
	else {

		const std::string check(argv[1]); // Check the first argument before the program.

		// Help message
		if (check == "help") helpMessage();

		// shape calculators
		else if (check == "rectangle") std::cout << parseFloat(argv[2]) * parseFloat(argv[3]) << '\n';
		else if (check == "square") std::cout << pow(parseFloat(argv[2]), 2) << '\n';
		else if (check == "triangle" || check == "diamond") std::cout << (parseFloat(argv[2]) * parseFloat(argv[3])) / 2 << '\n';
		else if (check == "circle") std::cout << Pi * pow(parseFloat(argv[2]), 2) << '\n';
		else if (check == "trapezium") std::cout << (parseFloat(argv[2]) + parseFloat(argv[3])) * parseFloat(argv[4]) / 2 << '\n';
		else if (check == "hypotenuse") std::cout << hypot(parseFloat(argv[2]), parseFloat(argv[3])) << '\n';
		else if (check == "regular_polygon") std::cout << (parseFloat(argv[2]) * parseFloat(argv[3])) / 2 << '\n';
		else if (check == "cube") std::cout << pow(parseFloat(argv[2]), 3) << '\n';
		else if (check == "parallelepiped") std::cout << parseFloat(argv[2]) * parseFloat(argv[3]) * parseFloat(argv[4]) << '\n';
		else if (check == "semicircle") std::cout << (pow(parseFloat(argv[2]), 2) * Pi) / circleParts(parseFloat(argv[3])) << '\n';

		// Version
		else if (check == "version") std::cout << "Version: " << Version << "\nProgram created by: Samuel de Oliveira\n";
	
		else std::cout << "You digit a invalid argument! Digit 'easarea help' for more info.\n";
	}

	return 0;

}

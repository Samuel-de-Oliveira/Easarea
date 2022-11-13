/*
 *  # -*- Easarea's source code -*- #
 *
 *  You can use this code to do any
 *  thing you want, you are free to
 *  do it.
 *
 *  Crated by: Samuel de Oliveira (Samuel-de-Oliviera)
 *  Code contribuitors: None
 *  Version: 1.1
 *
 */

// Import Area
#include <iostream>
#include "lib.hpp"
#include <string>
#include <cmath>

float calculateValue;

int main( int argc, char** argv ) {
	
	// if digit only program name, it shows the help message.
	if (argc == 1) helpMessage();
	else {
		
		const std::string check(argv[1]); // Check the first argument before the program.
		// Help message
		if (check == "help") helpMessage();

		// shape calculators
		else if (check == "rectangle") calculateValue = parseFloat(argv[2]) * parseFloat(argv[3]);
		else if (check == "square") calculateValue = pow(parseFloat(argv[2]), 2);
		else if (check == "triangle" || check == "diamond") calculateValue = (parseFloat(argv[2]) * parseFloat(argv[3])) / 2;
		else if (check == "circle") calculateValue = Pi * pow(parseFloat(argv[2]), 2);
		else if (check == "trapezium") calculateValue = (parseFloat(argv[2]) + parseFloat(argv[3])) * parseFloat(argv[4]) / 2;
		else if (check == "hypotenuse") calculateValue = hypot(parseFloat(argv[2]), parseFloat(argv[3]));
		else if (check == "regular_polygon") calculateValue = (parseFloat(argv[2]) * parseFloat(argv[3])) / 2;
		else if (check == "cube") calculateValue = pow(parseFloat(argv[2]), 3);
		else if (check == "parallelepiped") calculateValue = parseFloat(argv[2]) * parseFloat(argv[3]) * parseFloat(argv[4]);
		else if (check == "semicircle") calculateValue = (pow(parseFloat(argv[2]), 2) * Pi) / circleParts(parseFloat(argv[3]));

		// Show version and exit
		else if (check == "version") {
			std::cout << "Version: " << Version << "\nProgram created by: Samuel de Oliveira\n";
			return 0;
		}
		// If the command doesn't exist
		else { 
			std::cout << "You digit a invalid argument! Digit 'easarea help' for more info.\n";
			return 0;
		}
	}

	if (calculateValue <= 0) {
		std::cout << "\033[31;1mWarning\033[m: The area or volume of a shape should be a positive rational number!\n" <<
			     "Or else it's will be illogical mathematically.\n\n";

	}

	std::cout << calculateValue << '\n';
	return 0;

}

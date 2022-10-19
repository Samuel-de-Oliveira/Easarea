/*
 *  # -*- Easarea's source code -*- #
 *
 *  You can use this code to do any
 *  thing you want, you are free to
 *  do it.
 *
 *  Crated by: Samuel de Oliveira (Samuel-de-Oliviera)
 *  Code contribuitors: None
 *
 */

// Import Area
#include <iostream>
#include "lib.hpp"
#include <string>
#include <cmath>

// Help message function
void helpMessage(){

std::cout <<
"\nTo use you need to follow this format:\n"
"\teasarea [command] values...\n"
"\n"
"_*_ List of commands _*_\n"
"\n"
"rectangle: Calculate the area of a rectangle (b x h) [easarea rectangle [\"b\" value here] [\"h\" value here]]\n"
"square: Calculate the area of a square (s²) [easarea square [s value here]]\n"
"triangle: Calculate the area of a tringle ((b x h) / 2) [easarea triangle [\"b\" value here] [\"h\" value here]]\n"
"circle: Calculate the area of a circle (πr²) [easarea circle [\"r\" value here]]\n"
"trapezium: Calculate the area of a trapezium ((B + b) * h / 2) [easarea trapezium [\"B\" value here] [\"b\" value here] [\"h\" value here]]\n"
"diamond: Calculate the area of a diamond ((D * d) / 2) [easarea diamond [\"D\" value here] [\"b\" value here]]\n"
"hypotenuse: Calculate the hypotenuse of a triangle (X² = Y² + Z²) [easarea hypotenuse [\"Y\" value here] [\"Z\" value here]]\n"
"regular_polygon: Calculate the area of a regular polygon ((P * A) / 2) [easarea regular_polygon [\"P\" value here] [\"A value here\"]]\n"
"cube: Calculate the volume of a cube (s³) [easarea cube [\"s\" value here]]\n"
"parallelepiped: Calculate the valume of a parallelepiped (b * h * w) [easarea parallelepiped [\"b\" value here] [\"h\" value here] [\"w\" value here]]\n"

"version: Show the version of program [easarea version]\n"
"help: Show this message [easarea help]\n\n";

}

int main(int argc, char** argv) {
	
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

		// Version
		else if (check == "version") std::cout << "Version: " << Version << "\nProgram created by: Samuel de Oliveira\n";
	
		else std::cout << "You digit a invalid argument! Digit 'easarea help' for more info.\n";
	}

	return 0;

}

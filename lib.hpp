/*
 * # -*- Easarea lib -*- #
 *
 * Here I have created some
 * funtions to use in program,
 * enjoy it anyway.
 *
 * Created by: Samuel-de-Oliveira.
 *
 */

// Import Area
#include <iostream>
#include <sstream>

// Define the constants
const float Pi         {3.1415926535897}; // I defined this value for π.
const char Version[6] {"1.1.1"}; // Version's number.

// Help message
void helpMessage() {

std::cout <<
"\nTo use you need to follow this format:\n"
"\t\033[1measarea [command] values...\033[m\n"
"\n"
"_*_ List of commands _*_\n"
"\n"
"\033[1;34mrectangle:\033[m Calculate the area of a rectangle (b x h) [easarea rectangle [\"b\" value here] [\"h\" value here]]\n\n"
"\033[1;34msquare:\033[m Calculate the area of a square (s²) [easarea square [s value here]]\n\n"
"\033[1;34mtriangle:\033[m Calculate the area of a tringle ((b x h) / 2) [easarea triangle [\"b\" value here] [\"h\" value here]]\n\n"
"\033[1;34mcircle:\033[m Calculate the area of a circle (πr²) [easarea circle [\"r\" value here]]\n\n"
"\033[1;34mtrapezium:\033[m Calculate the area of a trapezium ((B + b) * h / 2) [easarea trapezium [\"B\" value here] [\"b\" value here] [\"h\" value here]]\n\n"
"\033[1;34mdiamond:\033[m Calculate the area of a diamond ((D * d) / 2) [easarea diamond [\"D\" value here] [\"b\" value here]]\n\n"
"\033[1;34mhypotenuse:\033[m Calculate the hypotenuse of a triangle (X² = Y² + Z²) [easarea hypotenuse [\"Y\" value here] [\"Z\" value here]]\n\n"
"\033[1;34mregular_polygon:\033[m Calculate the area of a regular polygon ((P * A) / 2) [easarea regular_polygon [\"P\" value here] [\"A value here\"]]\n\n"
"\033[1;34mcube:\033[m Calculate the volume of a cube (s³) [easarea cube [\"s\" value here]]\n\n"
"\033[1;34mparallelepiped:\033[m Calculate the valume of a parallelepiped (b * h * w) [easarea parallelepiped [\"b\" value here] [\"h\" value here] [\"w\" value here]]\n\n"
"\033[1;34msemicircle:\033[m Calculate the area of a semicircle ((r² * π) / (360 / angle)) [ easarea semicircle [\"r\" value]] [\"angle\" value]]\n\n"

"\033[1;34mversion:\033[m Show the version of program [easarea version]\n\n"
"\033[1;34mhelp:\033[m Show this message [easarea help]\n\n";
}

// Parse interger
int parseInt( const std::string &str ) {

	std::stringstream ss(str);
	int num;
	ss >> num;
	return num;

}

// Parse Float
float parseFloat( const std::string &str ) {

	std::stringstream ss(str);
	float num;
	ss >> num;
	return num;

}

// Calculate the parts of a circle with the angle.
float circleParts( const float angle ) {

	if ( angle > 360 ) {
		std::cout << "The angle can't be a value higher than 360º.\n";
		return 0;
	} else if ( angle <= 0 ) {
		std::cout << "The angle can't be a value lower or equal than 0º.\n";
		return 0;
	} else {
		return 360 / angle;
	}
}

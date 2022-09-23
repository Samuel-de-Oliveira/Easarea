/*
 * # -*- Easarea lib -*- #
 *
 * Here I have created some
 * funtions to use in program,
 * enjoy it anyway.
 *
 */

#include <sstream>

const float Pi         {3.1415926535897}; // I conseidered this value for π.
const char Version[12] {"0.1.1 Beta."}; // Version's number.

int parseInt(const std::string &str) {

	std::stringstream ss(str);
	int num;
	ss >> num;
	return num;

}

float parseFloat(const std::string &str) {

	std::stringstream ss(str);
	float num;
	ss >> num;
	return num;

}

float circleParts(float angle) {

	if (angle > 360) {
		std::cout << "The angle can't be a value higher than 360º.\n";
		return 0;
	}
	else return 360 / angle;

}

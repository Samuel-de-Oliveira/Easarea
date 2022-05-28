/*
 * # -*- Easarea lib -*- #
 *
 * Here a have created some
 * funtions to use in program,
 * enjoy it anyway.
 *
 */

#include <sstream>
using namespace std;

const float Pi = 3.1415926535897; // I conseidered this value for π
const string Version = "0.1.1 Beta."; // Version's number

int parseInt(const string &str) {

	stringstream ss(str);
	int num;
	ss >> num;
	return num;

}

float parseFloat(const string &str) {

	stringstream ss(str);
	float num;
	ss >> num;
	return num;

}

float circleParts(float angle) {
	
	if (angle > 360) { 
		cout << "The angle can't be a value higher than 360.";
		return 0;
	}
	else return 360 / angle;

}

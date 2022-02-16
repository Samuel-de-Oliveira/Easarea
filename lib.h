#include <sstream>
using namespace std;

const float Pi = 3.1415926535897; // I conseidered this value for π
const string Version = "0.2 Beta."; // Version's number

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
	
	if (angle > 360){ return 1; }
	else { return 360 / angle; }

}

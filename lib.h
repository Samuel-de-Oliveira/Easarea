#include <sstream>
using namespace std;

// I don't have created this codes I found it in StackOverflow page
// You are free to copy this :P

const float Pi = 3.1415926535897; // I conseidered this value for π

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

#include <sstream>
using namespace std;

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

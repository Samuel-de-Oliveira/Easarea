#include<sstream>
using namespace std;

int str_to_int(const string &str) {

	stringstream ss(str);
	int num;
	ss >> num;
	return num;

}

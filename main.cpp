#include <iostream>
#include "lib.h"
#include <string>
#include <cmath>

int main(int argc, char** argv){
	
	string check(argv[1]);

	if (argc >= 3){
			
	if (check == "square"){ std::cout << parseFloat(argv[2]) * parseFloat(argv[3]) << "\n";}
	if (check == "triangle"){ std::cout << (parseFloat(argv[2]) * parseFloat(argv[3])) / 2 << "\n"; }
	if (check == "circle"){ std::cout << 2 * Pi * pow(parseFloat(argv[2]), 2) << "\n"; }

	} else { std::cout << "You need 3 or more parameters to start\n"; }

	return 0;
}

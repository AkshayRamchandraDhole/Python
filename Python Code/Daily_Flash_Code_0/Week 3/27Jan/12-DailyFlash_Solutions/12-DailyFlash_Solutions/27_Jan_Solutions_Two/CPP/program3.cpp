#include <iostream>

int main () {

	float a, b;
	std::cout << ("Enter Distance in mt and Time in sec : \n");
	std::cin >> a >> b;
	
	if(a < 0 || b < 0)
		exit(0);
	
	std::cout << "The Velocity of a particle roaming in space is " << a / b << " m/s" << std::endl;
}


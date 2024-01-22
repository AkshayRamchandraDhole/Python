
#include <iostream>
#include <math.h>

int main () {

	float len, per;
	std::cout << ("Enter length in metre\n");
	std::cin >> len;
	std::cout << ("Enter period in seconds\n");
	std::cin >> per;
	
	/*float per = (2*3.142)/sqrt(len/9.81);
	std::cout << ("Period of that pendulum is : %f seconds\n", per);
	float fre = 1/per;
	std::cout << ("Frequency of that pendulum is : %f Hz\n", fre);*/
	
	float g = (4*3.142*3.142*len)/(per*per);
	std::cout << ("Acceleration of that pendulum is : ") << (g) << " m/sec sq";

	return 0;
}

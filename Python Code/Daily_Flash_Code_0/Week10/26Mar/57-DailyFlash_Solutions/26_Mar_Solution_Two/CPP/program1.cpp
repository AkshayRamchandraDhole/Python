
#include <iostream>
#define pie 3.142

int main () {
	int n;
	std::cout << ("Enter Angle in degrees : ");

	std::cin >> n;

	std::cout << ("Angle in Radians : ") <<  pie * ((float) n/180) << " \n";
}

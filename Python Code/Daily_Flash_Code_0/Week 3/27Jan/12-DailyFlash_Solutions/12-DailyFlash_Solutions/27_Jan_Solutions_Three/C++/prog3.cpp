#include<iostream>

int main() {
	double d, t;
	std::cout << "Enter dist : ";
	std::cin >> d;
	std::cout << "Enter time : ";
	std::cin >> t;
	if(d >= 0 && t >= 0) {
		std::cout << "Vel = " << d / t << " m/s";
	} else {
		std::cout << "Enter correct details.";
	}
	return 0;
}

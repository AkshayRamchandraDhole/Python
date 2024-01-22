#include<iostream>

int main(void) {
	double i, r;
	std::cout << "Current : ";
	std::cin >> i;
	std::cout << "Resistance : ";
	std::cin >> r;
	if(i >= 0 && r >= 0) 
		std::cout << "Volt : " << i * r;
	else 
		std::cout << "Enter correct det.";
	return 0;
}

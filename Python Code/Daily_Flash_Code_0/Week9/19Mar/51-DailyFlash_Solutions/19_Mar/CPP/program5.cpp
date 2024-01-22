
#include <iostream>

int main () {
	int n,t;
	float sum = 0;
	std::cout << ("Total Number : ");
	std::cin >> t;
	std::cout << ("Enter Numbers : ");
	for(int i = 1; i <= t; i++) {
		std::cin >> n;
		sum = sum + n;
	}
	std::cout << ("Average = ") << (sum /t) << std::endl;
}

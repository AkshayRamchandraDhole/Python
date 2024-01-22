#include<iostream>

int main() {
	int r1, i1, r2, i2;
	std::cout << "enter real and img (num1): ";
	std::cin >> r1 >> i1;
	std::cout << "enter real and img (num2): ";
	std::cin >> r2 >> i2;
	std::cout << "Add = " << r1 + r2 << " + " << i1 + i2 << "i";
	return 0;
}

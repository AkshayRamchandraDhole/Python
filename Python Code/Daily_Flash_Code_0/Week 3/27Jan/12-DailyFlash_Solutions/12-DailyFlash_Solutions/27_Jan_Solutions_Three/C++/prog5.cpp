#include<iostream>

int main() {
	int num1, num2, num3;
	std::cout << "Enter num1 : ";
	std::cin >> num1;
	std::cout << "Enter num2 : ";
	std::cin >> num2;
	std::cout << "Enter num3 : ";
	std::cin >> num3;
	if(num1 >= num2 && num1 >= num3) {
		std::cout << "Max = " << num1;
	} else if(num2 >= num3) {
		std::cout << "Max = " << num2;
	} else {
		std::cout << "Max = " << num3;
	}
	return 0;
}

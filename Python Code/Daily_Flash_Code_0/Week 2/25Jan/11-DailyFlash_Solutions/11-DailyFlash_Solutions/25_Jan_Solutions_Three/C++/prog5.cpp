#include<iostream>

int main() {
	int num1, num2;
	std::cout << "Enter num1 : ";
	std::cin >> num1;
	std::cout << "Enter num2 : ";
	std::cin >> num2;
	num1 > num2 ? std::cout << "Max : " << num1 : num1 == num2 ? std::cout << "Equal" : std::cout << "Max : " << num2;
	return 0;
}

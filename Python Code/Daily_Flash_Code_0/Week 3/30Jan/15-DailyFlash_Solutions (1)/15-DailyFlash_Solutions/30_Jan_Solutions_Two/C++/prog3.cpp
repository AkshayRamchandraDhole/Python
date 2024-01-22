#include<iostream>

int main() {
	int a, b;
	std::cout << "Enter num1 : ";
	std::cin >> a;
	std::cout << "Enter num2 : ";
	std::cin >> b;
	std::cout << "Quotient = " << a / b << "\n" << "Rem = " << a % b;
	return 0;
}

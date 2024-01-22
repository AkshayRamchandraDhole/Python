#include<iostream>

int main() {
	int a, b;
	std::cout << "Enter num1 : ";
	std::cin >> a;
	std::cout << "Enter num2 : ";
	std::cin >> b;
	b = (a + b) - (a = b);
	std::cout << "num1 = " << a << "\n";
	std::cout << "num2 = " << b << "\n";
	return 0;
}

#include<iostream>

int main() {
	int num1, num2;
	std::cout << "Enter num1 : ";
	std::cin >> num1;
	std::cout << "Enter num2 : ";
	std::cin >> num2;
	for(int i = num1; i <= num2; i++) {
		if(i % 2 == 1)
			std::cout << i << " ";
	}
	return 0;
}

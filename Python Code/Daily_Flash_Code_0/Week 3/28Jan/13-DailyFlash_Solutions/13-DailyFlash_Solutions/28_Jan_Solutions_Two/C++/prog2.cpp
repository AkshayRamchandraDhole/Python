#include<iostream>

int main() {
	int num1, num2, fact;
	std::cout << "Enter num1 : ";
	std::cin >> num1;
	std::cout <<"Enter num2 : ";
	std::cin >> num2;
	for(int i = num1; i <= num2; i++) {
		fact = 1;
		for(int j = 1; j <= i; j++) {
			fact *= j;
		}
		std::cout <<"Fact of " << i << " = " << fact << "\n";
	}
	return 0;
}

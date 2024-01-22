#include<iostream>

int main() {
	int num1, num2, rem = 1;
	std::cout << "num1 : ";
	std::cin >> num1;
	std::cout << "num2 : ";
	std::cin >> num2;
	while(1) {
		rem = num1 % num2;
		if(rem == 0)
			break;
		num1 = num2;
		num2 = rem;
	}
	std::cout << "gcd : " << num2;
	return 0;
}

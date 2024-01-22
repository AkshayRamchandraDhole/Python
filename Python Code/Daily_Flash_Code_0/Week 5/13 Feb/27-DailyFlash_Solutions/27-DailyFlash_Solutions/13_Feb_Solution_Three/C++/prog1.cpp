#include<iostream>

int main() {
	int num;
	std::cout << "Enter num : ";
	std::cin >> num;
	int temp = num, rem, sum = 0, fact;
	while(temp > 0) {
		rem = temp % 10;
		fact = 1;
		for(int i = 1; i <= rem; i++) {
			fact = fact * i;
		}
		sum += fact;
		temp /= 10;
	}
	if(num == sum) {
		std::cout << "Strong num";
	} else {
		std::cout << "Not strong num";
	}

	return 0;
}

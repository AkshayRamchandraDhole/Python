#include<iostream>

int main() {
	long num;
	int i = 0, odd = 0, even = 0;
	std::cout << "Enter num : ";
	std::cin >> num;
	while(num != 0) {
		if((num % 10) % 2 == 1)
			odd++;
		else
			even++;
		num = num / 10;
	}
	std::cout << "odd : " << odd << "\neven : " << even;
	return 0;
}

#include<iostream>

int main() {
	long num;
	int i = 0, even = 0;
	std::cout << "Enter num : ";
	std::cin >> num;
	while(num != 0) {
		if((num % 10) % 2 == 0)
			even++;
		num = num / 10;
	}
	std::cout << "No of even digits : " << even;
	return 0;
}

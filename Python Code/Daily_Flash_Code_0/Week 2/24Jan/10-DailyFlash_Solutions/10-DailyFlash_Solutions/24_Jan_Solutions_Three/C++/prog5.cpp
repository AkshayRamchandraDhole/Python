#include<iostream>

int main(void) {
	int num;
	std::cout << "Enter num : ";
	std::cin >> num;

	for(int i = 2; i <= num / 2; i++) {
		if(num % i == 0)
			std::cout << i << " ";
	}

	return 0;
}

#include<iostream>

int main(void) {
	std::cout << "First 50 odd numbers are : ";
	for(int i = 0; i < 100; i++) {
		if((i + 1) % 2 == 1) 
			std::cout << i + 1 << " ";
	}
	return 0;
}

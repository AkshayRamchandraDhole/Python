#include<iostream>

int main(void) {
	std::cout << "First 50 even numbers are : ";
	for(int i = 0; i < 100; i++) {
		if((i + 1) % 2 == 0) 
			std::cout << i + 1 << " ";
	}
	return 0;
}

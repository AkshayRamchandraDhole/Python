#include<iostream>

int main(void) {
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j <= i; j++) {
			i % 2 == 0 ? std::cout << "0 " : std::cout << "1 ";
		}
		std::cout << "\n";
	}
	return 0;
}

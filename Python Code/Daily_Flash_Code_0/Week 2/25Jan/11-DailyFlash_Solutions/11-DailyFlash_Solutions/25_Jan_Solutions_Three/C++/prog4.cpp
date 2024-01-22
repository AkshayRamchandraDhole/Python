#include<iostream>

int main() {
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j <= i; j++) {
			i % 2 == 0 ? std::cout << "a " : std::cout << "A ";
		}
		std::cout << "\n";
	}
	return 0;
}

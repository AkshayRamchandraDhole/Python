#include<iostream>

int main() {
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 7 - i; j++) {
			if(j < i) {
				std::cout << " ";
			} else {
				std::cout << "*";
			}
		}
		std::cout << "\n";
	}
}

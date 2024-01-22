#include<iostream>

int main() {
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 4 - i; j++) {
			if(j % 2 == 0) {
				std::cout << "+ ";
			} else {
				std::cout << "= ";
			}
		}
		std::cout << "\n";
	}
}

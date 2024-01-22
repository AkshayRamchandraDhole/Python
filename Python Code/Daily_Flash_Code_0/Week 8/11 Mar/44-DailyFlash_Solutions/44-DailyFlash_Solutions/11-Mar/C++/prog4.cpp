#include<iostream>

int main() {
	int a = 0, b = 1, c = 0;
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 7; j++) {
			if(j < 4) {
				if(j < 3 - i) {
					std::cout << "\t";
				} else {
					if(i == 0) {
						std::cout << a << "\t"; 
					} else if(i == 1 && j == 2) {
						std::cout << b << "\t";
					} else {
						c = a + b;
						std::cout << c << "\t";
						a = b;
						b = c;
					}
				}
			} else {
				if(j < 4 + i) {
					c = a + b;
					std::cout << c << "\t";
					a = b;
					b = c;
				}
			}
		}
		std::cout << "\n";
	}
	return 0;
}

#include<iostream>

int main() {
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			if(j < 3 - i) {
				std::cout << "    ";
			} else if(i + j == 3) {
				std::cout << "3   ";
			} else {
				std::cout << j * (j + i) << "   ";
			}
		}
		printf("\n");
	}
}

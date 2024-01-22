#include<iostream>

int main() {
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 7 - i; j++) {
			if(j < i) {
				std::cout << " ";
			} else {
				if(j % 2 == 0)
					std::cout << "*";
				else
					std::cout << "0";
			}
		}
		std::cout << "\n";
	}
}

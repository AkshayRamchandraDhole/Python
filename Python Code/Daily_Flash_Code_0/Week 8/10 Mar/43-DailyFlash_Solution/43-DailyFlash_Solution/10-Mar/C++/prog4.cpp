#include<iostream>

int main(void) {
	char ch;
	for(int i = 0; i < 4; i++) {
		ch = 'A';
		for(int j = 0; j < 7; j++) {
			if(j < 4) {
				if(j >= 3 - i) {
					std::cout << ch;
					ch++;
				} else {
					std::cout << " ";
				}
			} else {
				if(j < 4 + i) {
					std::cout << ch;
					ch++;
				}
			}
		}
		std::cout << "\n";
	}
}

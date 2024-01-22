#include<iostream>

int main() {
	char ch = 'A';
	for(int i = 0; i < 7; i++) {
		if(i>0)
			ch--;
		if(i < 4) {
			for(int j = 0; j < 4 + i; j++) {
				if(j < 3 - i)
					std::cout << " ";
				else {
					if(i % 2 == 0) {
						if(j % 2 == 1) {
							std::cout << ch;
							ch++;
						}
						else
							std::cout << " ";
					} else {
						if(j % 2 == 0) {
							std::cout << ch;
							ch++;
						}
						else
							std::cout << " ";
					}

				}
			}
		}
		else {
			for(int j = 0; j < 10 - i; j++) {
				if(j < i - 3)
					std::cout << " ";
				else {
					if(i % 2 == 0) {
						if(j % 2 == 1) {
							std::cout << ch;
							ch++;
						}
						else
							std::cout << " ";
					} else {
						if(j % 2 == 0) {
							std::cout << ch;
							ch++;
						}
						else
							std::cout << " ";
					}
				}
			}	
		}
		std::cout << "\n";
	}
}

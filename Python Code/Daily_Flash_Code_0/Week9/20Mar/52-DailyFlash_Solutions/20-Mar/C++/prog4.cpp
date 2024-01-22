#include<iostream>

int main() {
	int num = 1;
	char ch = 'A';
	for(int i = 0; i < 4; i++) {
		num = i * 2;
		for(int j = 0; j < 7 - i; j++) {
			if(j < i) {
				std::cout << "\t";
			} else {
				std::cout << ch << num << "\t";
				ch++;
				num++;
			}
		}
		std::cout << "\n";
	}
}

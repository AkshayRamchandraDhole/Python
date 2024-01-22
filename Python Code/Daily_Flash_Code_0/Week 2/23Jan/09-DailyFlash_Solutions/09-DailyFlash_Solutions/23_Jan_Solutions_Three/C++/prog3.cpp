#include<iostream>

int main() {
	int num1 = 1;
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j <= i; j++) {
			std::cout << num1 << " ";
			num1++;
		}
		std::cout << std::endl;
	}
	return 0;
}

#include<iostream>

int main() {
	int num;
	for(int i = 0; i < 4; i++) {
		num = 7 - i;
		for(int j = 0; j <= i; j++) {
			std::cout << num << " ";	
			num--;
		}
		std::cout << "\n";
	}
	return 0;
}

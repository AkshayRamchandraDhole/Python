#include<iostream>

int main() {
	int num = 1;
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j <= i; j++) {
			std::cout << num * num << " ";
			num++;
		}
		std::cout << "\n";
	}
	return 0;
}

#include<iostream>

int main() {
	for(int i = 0; i < 100; i++) {
		if((i + 1) % 3 == 0 || (i + 1) % 5 == 0) {
			std::cout << (i + 1) << " ";
		}
	}
	return 0;
}

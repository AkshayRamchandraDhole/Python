#include<iostream>

int main() {
	int inc, num = 1;
	std::cout << "Enter inc : ";
	std::cin >> inc;
	for(int i = 0; i < 10; i++) {
		std::cout << num << " ";
		num += inc;
	}
	return 0;
}

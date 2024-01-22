#include<iostream>

int main() {
	int num;
	std::cout << "Enter num : ";
	std::cin >> num;
	for(int i = 0; i < 10; i++) {
		std::cout << num << " * " << 10 - i << " = " << num * (10 - i) << "\n";
	}
}

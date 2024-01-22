#include<iostream>

int main() {
	int len, mul = 1;
	std::cout << "Enter len : ";
	std::cin >> len;
	for(int i = 1; i <= len; i++) {
		mul *=  i;
	}
	std::cout << mul;
}

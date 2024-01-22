#include<iostream>

int main() {
	int l, sum, mul = 1;
	std::cin >> l;
	for(int i = 1; i <= l; i++) {
		sum = 0;
		for(int j = 1; j <= i; j++) {
			sum += j;
		}
		mul *= sum;
	}
	std::cout << mul;
}

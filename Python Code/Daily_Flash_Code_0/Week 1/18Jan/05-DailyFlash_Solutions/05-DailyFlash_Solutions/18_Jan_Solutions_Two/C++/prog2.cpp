#include<iostream>

int main() {
	int sum = 0;
	for(int i = 0; i < 10; i++) {
		sum += i + 1;
	}
	std::cout << "Sum : " << sum;
	return 0;
}

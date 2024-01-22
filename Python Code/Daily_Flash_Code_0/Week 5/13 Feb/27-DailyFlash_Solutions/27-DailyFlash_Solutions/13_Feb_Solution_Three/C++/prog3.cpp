#include<iostream>

int main() {
	int num;
	std::cout << "Enter num : ";
	std::cin >> num;
	int temp = num, rem, sum = 0;
	while(temp > 0) {
		rem = temp % 10;
		sum += rem;
		temp /= 10;
	}
	std::cout << "Sum : " << sum;

	return 0;
}

#include<iostream>

int main() {
	long num;
	int i = 0;
	std::cout << "Enter num : ";
	std::cin >> num;
	while(num != 0) {
		num = num / 10;
		i++;
	}
	printf("No of digits : %d", i);
	return 0;
}

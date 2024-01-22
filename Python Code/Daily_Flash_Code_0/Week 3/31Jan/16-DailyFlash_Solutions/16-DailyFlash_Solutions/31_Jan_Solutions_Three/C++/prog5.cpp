#include<iostream>

int main() {
	int num, sum;
	std::cout << "Enter num : ";
	std::cin >> num;
	for(int i = 2; i <= num; i++) {
		sum = 0;
		for(int j = 1; j <= i/2 ; j++) {
			if(i % j == 0)
				sum += j;
		}
		if(sum == i)
			std::cout << i << " ";
	}
	return 0;
}

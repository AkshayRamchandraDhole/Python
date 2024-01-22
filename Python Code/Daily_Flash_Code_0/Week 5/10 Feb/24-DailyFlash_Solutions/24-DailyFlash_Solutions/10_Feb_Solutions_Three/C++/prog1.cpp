#include<iostream>

int main(void) {
	int n;
	std::cout << "Enter n : ";
	std::cin >> n;
	int sum = 0;
	for(int j = 1; j <= n; j++) {
		sum = 0;
		for(int i = 1; i * i <= j; i++) {
			if(j % i == 0) {
				sum += i;
			}
			if(j / i != i && j % (j / i) == 0) {
				if(i == 1)
					continue;	
				sum += j / i;
			}
		}
		if(sum > j) 
			std::cout << j << " ";
	}
}

#include<iostream>

int main() {
	int n, sum = 0, num;
	std::cin >> n;
	for(int i = 0; i < n; i++) {
		std::cin >> num;
		sum += num;
	}
	std::cout << (float)sum / (float)n;
}

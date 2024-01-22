#include<iostream>

int main() {
	int num;
	std::cout << "num : ";
	std::cin >> num;
	for(int i = num; i >= 0; i--) {
		if(i % 2 == 0) {
			std::cout << i << " ";
		}
	}
	return 0;
}

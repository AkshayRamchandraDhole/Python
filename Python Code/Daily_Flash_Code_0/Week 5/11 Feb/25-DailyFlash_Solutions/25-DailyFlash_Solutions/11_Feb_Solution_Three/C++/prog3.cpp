#include<iostream>

int main() {
	
	int num;
	std::cout << "Enter num : ";
	std::cin >> num;
	while(num >= 0) {
		if(num % 2 == 0)
			std::cout << num << " ";
		num--;
	}
	return 0;
}

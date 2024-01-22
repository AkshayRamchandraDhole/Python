#include<iostream>

int main() {
	int num;
	std::cout << "Enter num : ";
	std::cin >> num;	
	for(int i = 1; i <= num ; i++) {
		if(i % 2 == 1)
			std::cout << "Cube of " << i << " : " << i * i * i << std::endl;
	}
	return 0;
}

#include <iostream>

int main() {

	int a;
	std::cout <<("Enter Size : ");
	std::cin >> a;

	if(a < 0) 
		exit(0);
	
	int s = a * a;
	for(int i = 1; i <= s; i++){
		if(i % a == 0) {
			std::cout << ("0\n");
		}
		else{
			std::cout << ("0 ");
		}
	}
}


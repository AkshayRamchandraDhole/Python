
#include <iostream>

int main () {
	int n,mul;
	std::cout << ("Enter Number : ");
	std::cin >> n;
	
	mul = 1;
	for(int i = 1; i<= n; i++){
		mul = mul*((i*(i+1))/2);
	}
	std::cout << (mul) << std::endl;
}

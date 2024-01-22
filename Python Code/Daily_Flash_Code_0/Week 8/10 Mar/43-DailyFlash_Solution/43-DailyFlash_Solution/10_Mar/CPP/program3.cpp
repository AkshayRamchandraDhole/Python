
#include <iostream>

int main() {

	int n;
	std::cout << ("Enter Number : \n");
	do {
		std::cin >> n;
		if(n < 0)
			break;
		std::cout << ("cube of ") << n << (n*n*n) << std::endl;
		
	}while(1);
	std::cout << ("You entered a negative number\n");
}

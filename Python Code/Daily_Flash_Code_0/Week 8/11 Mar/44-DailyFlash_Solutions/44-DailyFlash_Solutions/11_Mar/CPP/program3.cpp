
#include <iostream>

int main() {

	int n, fact = 1;
	std::cout << ("Enter Number : \n");
	do {
		std::cin >> n;
		fact = 1;
		if(n < 0)
			break;
		for(int i = 1; i <= n; i++)
			fact *= i;
		std::cout << ("Factorial of ") << n << " : " << (fact) << std::endl;
		
	}while(1);
	std::cout << ("You entered a negative number\n");
}

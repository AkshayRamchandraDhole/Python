#include <iostream>

int main() {
	
	int n, flag = 0;
	std::cout << ("Enter Positive Number : ");
	std::cin >> n;

	if(n < 0){
		std::cout << ("Enter Positive Number\n");
		exit(0);
	}
	
	std::cout << ("perfect Divisors of ") << n << " are : \n" ;
	for(int i = 2; i <= n/2; i++) {
		if(n % i == 0 ) { 
			flag = 1;
			std::cout << i << " ";
		}
	}
	if(flag == 0)
		std::cout << ("Prime Number");
	std::cout << ("\n");
}

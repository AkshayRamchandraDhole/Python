#include <iostream>

int factorial(int n) {
	
	if(n == 0)
		return 1;
	return n * factorial(n-1);
}

int main () {

	int n;
	printf("Enter Number : \n");
	scanf("%d", &n);

	if(n < 0)
		exit(0);
	std::cout << ("Factorial of ") << n << " is " << factorial(n) << std::endl;
	return 0 ;
}

#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
	
	if(n == 0)
		return 1;
	return n * factorial(n-1);
}

void main () {

	int n;
	printf("Enter Number : \n");
	scanf("%d", &n);

	if(n < 0)
		exit(0);
	printf("Factorial of %d is %d\n", n, factorial(n));
	return ;
}

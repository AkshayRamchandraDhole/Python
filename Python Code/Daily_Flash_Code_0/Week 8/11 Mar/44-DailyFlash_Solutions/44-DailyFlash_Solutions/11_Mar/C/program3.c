
#include <stdio.h>

void main() {

	int n, fact;
	printf("Enter Number : \n");
	do {
		scanf("%d", &n);
		if(n < 0)
			break;
		fact = 1;
		for(int i = 1; i <= n; i++)
			fact = fact * i;
		printf("Factorial of %d : %d\n", n, fact);
		
	}while(1);
	printf("You entered a negative number\n");
}

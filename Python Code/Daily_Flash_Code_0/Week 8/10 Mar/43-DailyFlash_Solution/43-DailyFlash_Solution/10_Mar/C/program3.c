
#include <stdio.h>

void main() {

	int n;
	printf("Enter Number : \n");
	do {
		scanf("%d", &n);
		if(n < 0)
			break;
		printf("cube of %d : %d\n", n, n*n*n);
		
	}while(1);
	printf("You entered a negative number\n");
}

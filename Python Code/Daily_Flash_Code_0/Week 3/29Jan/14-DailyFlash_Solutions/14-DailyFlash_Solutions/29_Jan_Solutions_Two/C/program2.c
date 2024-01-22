
#include <stdio.h>
#include <stdlib.h>

void main (void){

	int n,i;
	printf("Enter Number : ");
	scanf("%d", &n);
	printf("Second Successor : %d\nSecond Predecessor : %d\n", n + 2, n - 2);
}

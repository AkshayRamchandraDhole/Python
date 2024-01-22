
#include <stdio.h>

void main () {
	int n, sum = 0;
	printf("Enter Number: ");
	scanf("%d", &n);
	for(int i = (n%2==0)?n:n-1; i >= 0; i-=2){
		printf("%d ", i);
	}
	printf("\n");
}

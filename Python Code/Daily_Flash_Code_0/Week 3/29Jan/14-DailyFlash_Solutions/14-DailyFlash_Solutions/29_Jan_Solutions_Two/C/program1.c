
#include <stdio.h>
#include <stdlib.h>

void main (void){

	int n,i;
	printf("Enter Number : ");
	scanf("%d", &n);
	
	if(n < 0)
		exit(0);
	
	i = 10;
	while(i > 0){
		printf("%d * %d = %d\n", n , i , n * i);
		i--;
	}
}

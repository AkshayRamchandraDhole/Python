
#include <stdio.h>
#include <stdlib.h>

void main (void){

	int l,b;
	printf("Enter length and breadth : \n");
	scanf("%d %d", &l, &b);
	
	if(l < 0 || b < 0 || l < b)
		exit(0);

	printf("Area Of Rectangle = %d sq unit\n", l * b);
}

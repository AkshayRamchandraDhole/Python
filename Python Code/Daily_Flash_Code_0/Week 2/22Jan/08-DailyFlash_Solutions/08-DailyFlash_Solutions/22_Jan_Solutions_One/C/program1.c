#include <stdio.h>

void main () {

	int a,  b;
	printf("Enter Numbers : \n");
	scanf("%d%d", &a, &b);
	
	int k = a + b;
	b = (a>b)? a - b : b - a;
	printf("Addition : %d\nSubtraction : %d\n", k, b);
}

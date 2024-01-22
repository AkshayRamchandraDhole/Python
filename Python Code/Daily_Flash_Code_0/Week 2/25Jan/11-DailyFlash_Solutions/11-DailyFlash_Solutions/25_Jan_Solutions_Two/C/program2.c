
#include <stdio.h>

void main () {

	int a, b;
	printf("Enter Numbers : \n");
	scanf("%d %d", &a, &b);

	printf("Before Swap :\n");
	printf("a : %d\n", a);
	printf("b : %d\n", b);
	
	b = a + b - (a = b);
	
	printf("After Swap :\n");
	printf("a : %d\n", a);
	printf("b : %d\n", b);
}

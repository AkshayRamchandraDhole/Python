
#include <stdio.h>

void main () {

	int a, b;
	printf("Enter Numbers : \n");
	scanf("%d %d", &a, &b);

	printf("Minimum amongst %d and %d : %d\n", a,b,(a>=b)?b:a);
}

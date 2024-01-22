
#include <stdio.h>

void main () {

	int a, b;
	printf("Enter Numbers : \n");
	scanf("%d %d", &a, &b);

	printf("Maximumamongst %d and %d : %d\n", a,b,(a>=b)?a:b);
}

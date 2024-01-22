
#include <stdio.h>
void exit(int);

void main () {
	int n;
	printf("Total Number of Natural Numbers : ");
	scanf("%d", &n);

	n <= 0 ? exit(0):n;

	printf("Sum : %d\n", n*(n + 1)/2);
}

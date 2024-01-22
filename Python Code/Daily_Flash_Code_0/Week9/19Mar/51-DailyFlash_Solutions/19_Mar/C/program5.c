
#include <stdio.h>

void main () {
	int n,t;
	float sum = 0;
	printf("Total Number : ");
	scanf("%d", &t);
	printf("Enter Numbers : ");
	for(int i = 1; i <= t; i++) {
		scanf("%d", &n);
		sum = sum + n;
	}
	printf("Average = %f\n", sum /t);
}

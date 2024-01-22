
#include <stdio.h>
#include <math.h>
#define pie 3.142

void main () {
	float b;
	float h;
	float area;
	printf("Enter area and Height\n");
	scanf("%f%f",&area,&h);
	b = (2 * area)/h;
	printf("Base : %f\n", b);
}

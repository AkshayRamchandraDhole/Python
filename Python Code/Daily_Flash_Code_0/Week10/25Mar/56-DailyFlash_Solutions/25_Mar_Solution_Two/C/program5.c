
#include <stdio.h>
#include <math.h>
#define pie 3.142

void main () {
	int b;
	float h;
	float area;
	printf("Enter area and base\n");
	scanf("%f%d",&area,&b);
	h = (2 * area)/b;
	printf("Height : %f\n", h);
}

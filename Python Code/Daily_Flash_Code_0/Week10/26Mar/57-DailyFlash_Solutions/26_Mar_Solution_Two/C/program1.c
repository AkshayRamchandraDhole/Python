
#include <stdio.h>
#define pie 3.142

void main () {
	int n;
	printf("Enter Angle in degrees : ");

	scanf("%d", &n);

	printf("Angle in Radians : %f\n", pie * ((float) n/180));
}

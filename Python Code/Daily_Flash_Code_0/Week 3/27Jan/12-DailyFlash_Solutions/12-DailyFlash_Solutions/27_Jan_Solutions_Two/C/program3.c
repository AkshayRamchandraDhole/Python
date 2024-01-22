
#include <stdio.h>
#include <stdlib.h>

void main () {

	float a, b;
	printf("Distance in metres : ");
	scanf("%f", &a);
	printf("Time in sec : ");
	scanf("%f", &b);

	if(a <= 0 || b <= 0){
		printf("Negative values are not allowed");
		exit(0);
	}
	printf("The Velocity of Particle roaming in space is %5.2f m/s\n", a/b );
}

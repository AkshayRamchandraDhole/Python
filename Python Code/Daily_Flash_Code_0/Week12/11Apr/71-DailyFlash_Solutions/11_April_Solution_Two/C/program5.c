
#include <stdio.h>
#include <math.h>

void main () {
	
	int a,b,c;
	printf("Enter a, b and c : ");
	scanf("%d%d%d", &a,&b,&c);
	float x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
	float x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
	printf("x1 : %f\n", x1);
	printf("x2 : %f\n", x2);
}

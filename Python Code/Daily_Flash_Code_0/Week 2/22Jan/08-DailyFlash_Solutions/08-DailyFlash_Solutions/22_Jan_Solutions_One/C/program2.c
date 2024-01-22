#include <stdio.h>
void exit(int);

void main () {

	float a,  b;
	printf("Enter Numbers : \n");
	scanf("%f%f", &a, &b);
	
	float k = a * b;
	
	if ((b==0 && b <= a) || (a == 0 && a <= b)){
		printf("Denominator can't be Zeror\n");
		exit(0);
	}
	else{
		printf("Multiplication : %f\nDivision : %f\n", k, (a/b) > (b/a)? a/b : b/a);
	}
}

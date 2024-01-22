#include<stdio.h>

int main(void) {
	double l, b;
	printf("Enter len: ");
	scanf("%lf", &l);
	printf("Enter br : ");
	scanf("%lf", &b);
	if(l >= 0 && b >= 0)
		printf("Area = %lf\n", l * b);
	else
		printf("Enter valid det.");
}

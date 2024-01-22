#include<stdio.h>

int main(void) {
	double i, r;
	printf("Current : ");
	scanf("%lf", &i);
	printf("Resistance : ");
	scanf("%lf", &r);
	if(i >= 0 && r >= 0) 
		printf("Volt : %lf", i * r);
	else 
		printf("Enter correct det.");
	return 0;
}

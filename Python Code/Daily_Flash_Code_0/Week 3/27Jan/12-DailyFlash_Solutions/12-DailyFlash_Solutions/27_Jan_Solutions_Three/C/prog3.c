#include<stdio.h>

int main(void) {
	double d, t;
	printf("Enter dist : ");
	scanf("%lf", &d);
	printf("Enter time : ");
	scanf("%lf", &t);
	if(d >= 0 && t >= 0) {
		printf("Vel : %lf m/s", d / t);
	} else {
		printf("Enter correct details.");
	}
	return 0;
}

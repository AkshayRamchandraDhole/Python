#include<stdio.h>

int main(void) {
	double m, v;
	printf("Enter mass : ");
	scanf("%lf", &m);
	printf("Enter vel : ");
	scanf("%lf", &v);
	if(m >= 0 && v >= 0) { 
		printf("K.E = %lf\n", m * v * v / 2);
	} else {
		printf("Enter valid det.");
	}
	
	return 0;
}

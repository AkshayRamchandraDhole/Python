#include <stdio.h>

void main(){

	int base = 0;
	float height = 0;
	float area = 0;

	printf("Enter Base of Triangle\n");
	scanf("%d",&base);
	printf("Enter Area of Triangle\n");
	scanf("%f",&area);

	height = 2*area/base;
	printf("Height Of Triangle = %.2f\n",height);

	return 0;
}

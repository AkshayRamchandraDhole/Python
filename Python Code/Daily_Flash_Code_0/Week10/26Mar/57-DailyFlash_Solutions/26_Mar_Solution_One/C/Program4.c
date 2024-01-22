#include <stdio.h>

void main(){

	float base = 0,height = 0,area = 0;

	printf("Enter Height of Triangle\n");
	scanf("%f",&height);
	printf("Enter Area of Triangle\n");
	scanf("%f",&area);

	base = 2*area/height;
	printf("Base Of Triangle = %.2f\n",base);

}

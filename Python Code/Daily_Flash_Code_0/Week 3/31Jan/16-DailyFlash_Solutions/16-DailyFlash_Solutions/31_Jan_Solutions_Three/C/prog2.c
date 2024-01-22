#include<stdio.h>

int main(void) {
	float rs;
	printf("Enter rs : ");
	scanf("%f", &rs);
	if(rs >= 0)
		printf("Dollar : %f",rs / 71.45);
	else 
		printf("Enter valid det.");
	return 0;
}

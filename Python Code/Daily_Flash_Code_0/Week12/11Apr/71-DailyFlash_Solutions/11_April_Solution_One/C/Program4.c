#include<stdio.h>
#include<math.h>

void main(){

	int a,b,c,x1,x2;

	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	printf("Enter the value of c : ");
	scanf("%d",&c);
	
	x1 = (-b + sqrt(pow(b,2) - 4*a*c)) / (2*a);	
	x2 = (-b - sqrt(pow(b,2) - 4*a*c)) / (2*a);	

	printf("Value of x1 : %d\n",x1);
	printf("Value of x2 : %d\n",x2);
}


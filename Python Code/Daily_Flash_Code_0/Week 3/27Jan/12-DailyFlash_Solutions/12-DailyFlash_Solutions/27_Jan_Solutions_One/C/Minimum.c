#include<stdio.h>

void main(){

	int num1,num2;

	printf("Enter number 1: ");
	scanf("%d",&num1);

	printf("Enter number 2: ");
	scanf("%d",&num2);

	printf("The Minimun number amongst %d & %d is %d",num1,num2,num1<num2?num1:num2);

}	

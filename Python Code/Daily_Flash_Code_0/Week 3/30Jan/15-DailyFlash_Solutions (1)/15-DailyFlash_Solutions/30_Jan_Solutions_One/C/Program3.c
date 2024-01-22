#include<stdio.h>

void main(){
	
	int num1,num2;

	printf("Enter the num1 : ");
	scanf("%d",&num1);
	printf("Enter the num2 : ");
	scanf("%d",&num2);

	printf("Quotient : %d\n",num1>num2?num1/num2:num2/num1);
	printf("Reminder : %d\n",num1>num2?num1%num2:num2%num1);
}	

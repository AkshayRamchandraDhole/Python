

#include<iostream>


int main(){
	
	int num1,num2;
	printf("Enter the number1: ");
	scanf("%d",&num1);
	printf("Enter the number2: ");
	scanf("%d",&num2);

	printf("Before Swaping num1 = %d and num2 = %d \n ",num1,num2);

	num1 = num1+num2;
	num2 = num1-num2;
	num1 = num1-num2;

	printf("After Swaping num1 = %d and num2 = %d",num1,num2);

}	

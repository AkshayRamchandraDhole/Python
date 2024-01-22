/*
Program 2: Write a Program which accepts two integers from user and swaps
their insertion order.
Input : 20 30
Output :
Before Swap : 20 30
After Swap : 30 20
*/


#include<iostream>

int main(){
	
	int num1,num2;

	printf("Enter number1 : ");
	scanf("%d",&num1);

	printf("Enter the number2 : ");
	scanf("%d",&num2);


	printf("Before Swap num1 = %d and num2 = %d\n",num1,num2);

	num1 = num1+num2;
	num2 = num1 - num2;
	num1 = num1 - num2;

	printf("After swap num1 = %d and num2 = %d",num1,num2);


}	

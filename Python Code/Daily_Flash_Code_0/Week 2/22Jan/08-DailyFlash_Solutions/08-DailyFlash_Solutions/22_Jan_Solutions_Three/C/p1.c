/*
Program 1: Write a program that accepts two integers from user and prints
addition & Subtraction of them.
{Note: checks for greater number to subtracts with while subtracting numbers}
Input: 10 20
Output:
Addition is 20
Subtraction is 10
*/


#include<stdio.h>


int main(){
	int var1,var2,sub=0,add=0;

	printf("Enter two integers : \n");
	scanf("%d",&var1);
	scanf("%d",&var2);

	add=var1+var2;
	printf("addition is %d\n",add);


	if(var1>var2){
		sub=var1-var2;
		printf("Subtraction is %d\n",sub);


	}
	else if(var2>var1){
		sub=var2-var1;
		printf("subtraction is %d\n",sub);


	}




	return 0;
}

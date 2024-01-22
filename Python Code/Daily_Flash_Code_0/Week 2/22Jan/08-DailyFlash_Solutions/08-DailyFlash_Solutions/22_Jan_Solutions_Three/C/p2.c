/*
Program 2: Write a program that accepts two integers from user and prints
multiplication & Division of them.
{Note: checks for smaller divisor amongst entered number while computing
division}
Input: 10 20
Output:
Multiplication is 200
Division is 2
*/


#include<stdio.h>


int main(){
	int var1,var2,mul=0;
	float div=0;

	printf("Enter two integers : ");
	scanf("%d",&var1);
	scanf("%d",&var2);

	mul=var1*var2;
	printf("Multiplication is %d \n",mul);


	if(var1>var2){
		div=var1/var2;
		printf("Division is %f \n ",div);

	}
	else if(var2>var1){
		div=var2/var1;
		printf("Division is %f\n",div);

	}
	
	return 0;
}

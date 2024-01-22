/*
Program 3: Write a program that accepts two integers from user and prints
addition of their Cubes and subtraction of their Squares.
Input: 10 20
Output:
Addition of 1000 & 8000 is 9000
Subtraction of 100 & 400 is -300
*/


#include<stdio.h>


int main(){
	int var1,var2,sub=0,add=0;

	printf("Enter two integers : ");
	scanf("%d",&var1);
	scanf("%d",&var2);

	add=(var1*var1*var1)+(var2*var2*var2);
	printf("addition of %d & %d is %d\n",var1*var1*var1,var2*var2*var2,add);


	if(var1>var2){
		sub=(var1*var1)-(var2*var2);
		printf("subtraction of %d & %d is %d\n",var1*var1,var2*var2,sub);
		

	}
	else if(var2>var1){
		sub=(var2*var2)-(var1*var1);
		printf("subtraction of %d & %d is %d\n",var2*var2,var1*var1,sub);
		

	}

	return 0;
}

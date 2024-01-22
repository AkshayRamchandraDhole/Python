/*
Program 4: Write a Program to simulate simple calculator. Accept two integers
from user and sign of operation to perform.
Input:
Enter First Number: 10
Enter Second Number: 20
Enter the sign of Operation: +
Output: Addition of 10 & 20 is 30.
*/

#include<stdio.h>


int main(){
	int var1,var2,sub=0,add=0,mul=0;
	float div;
	char sign;


	printf("Enter two integers : \n");
	scanf("%d",&var1);
	scanf("%d",&var2);

	printf("Enter sign of operation : \n");
	scanf(" %c",&sign);

	switch(sign){
		case '+' :add=var1+var2;
			printf("addition of %d & %d is %d\n",var1,var2,add);
			  break;
		
		case '-':sub=var1-var2;
			printf("subtraction of %d & %d is %d\n",var1,var2,sub);
			 break;
		
		case '*':mul=var1*var2;
			printf("multiplication of %d & %d is %d\n",var1,var2,mul);
			 break;

		case '/':div=var1/var2;
			printf("division of %d & %d is %f\n",var1,var2,div);
			break;

		default:printf("Invalid input\n");

	}

	return 0;
}



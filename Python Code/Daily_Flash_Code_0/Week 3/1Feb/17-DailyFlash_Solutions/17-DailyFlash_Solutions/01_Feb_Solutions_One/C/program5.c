#include<stdio.h>


void  main(){

	int num1,num2;
	int remainder,temp;
	printf("Enter the first number1 \n");
	scanf("%d",&num1);
	printf("Enter the first number2 \n");
	scanf("%d",&num2);

	remainder = num1>num2?num1%num2:num2%num1;
	temp  = remainder;
	while(remainder!=0){

		temp = remainder;

		remainder = num1>num2?num2%remainder:num1%remainder;

		if(num1>num2)
			num2 = temp;
		else
			num1 = temp;
	}	

	if(remainder == 0)
		printf("GCD = %d",num1>num2?num2:num1);
	else
		printf("GCD  = %d",temp);



	
}	

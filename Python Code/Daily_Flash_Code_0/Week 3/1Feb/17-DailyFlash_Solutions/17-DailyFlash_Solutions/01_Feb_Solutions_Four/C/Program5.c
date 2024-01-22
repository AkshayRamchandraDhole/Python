/* Problem Statement
 * 
 * Write a Program that calculates the Greatest Common Divisor of two entered numbers
 */

#include<stdio.h>

void main() {

	/*
	 * Variables - (type int)
	 * num1 - User Input for num1
	 * num2 - User Input for num2
	 * */
	int num1,num2,gcd;

	/* do-while loop 
	 * To take user input till all the conditions are true
	 * Condition 1 - Both Values should be non-Negative and greater than Zero
	 * */

	do {
		//reinitialisation of variables to zero before input
		num1 = 0,num2 = 0;

		printf("Enter num1\n");
		scanf(" %d",&num1);
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		printf("Enter num2\n");
		scanf(" %d",&num2);
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		//If statement to print error message if Condition 1 is false
		if(num1 <= 0 || num2 <= 0){

			printf("Invalid Input, Enter non-zero Positive Values only\n");
		}

	}while(num1 <= 0 || num2 <= 0 );

	if(num1 > num2){

		int temp = num1;
		num1 = num2;
		num2 = temp;
	}

	for(int lc = 1; lc <= num1; lc++){

		if(num1 % lc == 0 && num2 % lc == 0)
			gcd = lc;
	}

	printf("The GCD of %d and %d is %d\n",num1,num2,gcd);
	
}

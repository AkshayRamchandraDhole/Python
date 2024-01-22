/* Problem Statement
 * 
 * Write a Program that accepts Two integers from user and prints minimum number from them.
 */

#include<stdio.h>

void main() {

	/*
	 * Variables - (type int)
	 * Num1 - User Input for Number 1
	 * Num2 - User Input for Number 2
	 * */
	int num1,num2;

	/* do-while loop 
	 * To take user input till all the conditions are true
	 * Condition 1 - Both Values should be non-Negative and greater than Zero
	 * Condition 2 - num1 should not be less than num2
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
		//else-if statement to print error message if num1 equal to num2
		else if (num1 == num2){

			printf("Invalid, both values are equal\n");
		}

	}while(num1 <= 0 || num2 <= 0 || num2 <= num1);

	if(num1 < num2)
		printf("The Minimum number amongst %d and %d is %d\n",num1,num2,num1);
	else 
		printf("The Minimum number amongst %d and %d is %d\n",num1,num2,num1);

}

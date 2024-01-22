/* Problem Statement
 * 
 * Write a Program that accepts Three integers from user and prints minimum number from them
 */

#include<stdio.h>

void main() {

	/*
	 * Variables - (type int)
	 * Num1 - User Input for Number 1
	 * Num2 - User Input for Number 2
	 * Num3 - User Input for Number 3
	 * */
	int num1,num2,num3;

	/* do-while loop 
	 * To take user input till all the conditions are true
	 * Condition 1 - All Values should be non-Negative and greater than Zero
	 * */

	do {
		//reinitialisation of variables to zero before input
		num1 = 0,num2 = 0,num3 = 0;

		printf("Enter num1\n");
		scanf(" %d",&num1);
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		printf("Enter num2\n");
		scanf(" %d",&num2);
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		printf("Enter num3\n");
		scanf(" %d",&num3);
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		//If statement to print error message if Condition 1 is false
		if(num1 <= 0 || num2 <= 0 || num3 <= 0){

			printf("Invalid Input, Enter non-zero Positive Values only\n");
		}
		//else-if statement to print error message if num1 equal to num2
		else if (num1 == num2 || num1 == num3 || num2 == num3){

			printf("Invalid, No two values to be equal\n");
		}

	}while(num1 <= 0 || num2 <= 0 || num3 <= 0 || num1 == num2 || num2 == num3 || num1 == num3);

	if(num1 < num2 && num1 < num3)

		printf("The Minimum number amongst %d, %d and %d is %d\n",num1,num2,num3,num1);

	else if(num2 < num3 && num2 < num1)

		printf("The Minimum number amongst %d, %d and %d is %d\n",num1,num2,num3,num2);

	else
		printf("The Minimum number amongst %d, %d and %d is %d\n",num1,num2,num3,num3);

}

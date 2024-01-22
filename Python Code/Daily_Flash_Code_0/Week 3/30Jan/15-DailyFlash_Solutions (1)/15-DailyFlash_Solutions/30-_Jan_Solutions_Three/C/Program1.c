/* Problem Statement
 * 
 * Write a Program to Swap two entered number without using a third temporary variable
 */

#include<stdio.h>

void main() {

	/*
	 * Variables - (type int)
	 * num1 - User Input for num1 of rectangle
	 * num2 - User Input for num2 of rectangle
	 * */
	int num1,num2;

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

	printf("Before swap num1 = %2d and num2 = %2d\n",num1,num2);
	
	//Add the another number to swap in the first number, num1 will have addition of num1 and num2
	num1 = num1 + num2;

	//Subtract the added number from num1 and store in num2, num2 will have value of num1, num1 still has the sum 
	num2 = num1 - num2;

	//Now subtract the num2 from num1, and assign it to num1, num1 will have value of actual num2
	num1 = num1 - num2;

	printf("After swap num1 = %2d and num2 = %2d\n",num1,num2);
	
}

/* Problem Statement
 * 
 * Write a Program to take input length and breadth of rectangle and calculate its area.
 */

#include<stdio.h>

void main() {

	/*
	 * Variables - (type int)
	 * length - User Input for length of rectangle
	 * breadth - User Input for breadth of rectangle
	 * */
	int length,breadth;

	/* do-while loop 
	 * To take user input till all the conditions are true
	 * Condition 1 - Both Values should be non-Negative and greater than Zero
	 * */

	do {
		//reinitialisation of variables to zero before input
		length = 0,breadth = 0;

		printf("Enter Length in Centimeters\n");
		scanf(" %d",&length);
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		printf("Enter breadth in Centimetres\n");
		scanf(" %d",&breadth);
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		//If statement to print error message if Condition 1 is false
		if(length <= 0 || breadth <= 0){

			printf("Invalid Input, Enter non-zero Positive Values only\n");
		}

	}while(length <= 0 || breadth <= 0 );

	//Area is given by Product of Length and Breadth
	int area = length*breadth;
	printf("The Area of Rectangle  A = %d cm^2\n",area);
}

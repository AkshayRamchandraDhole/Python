/* Problem Statement
 * 
 * Write a Program that accepts Two integers from user and prints the series of factorial of all numbers between those two inputs
 * A factorial is calculated by multiplying all the numbers including the number itself till 1
 * Example Factorial of 4 = 4*3*2*1 = 24
*/

#include<stdio.h>

void main() {

	/*
	 * Variables - (type int)
	 * start - User Input for start Position of Series
	 * end   - User Input for end Position of Series
	 * fact  - To store factorial of a number
	 * */
	int start,end,fact = 1;

	/* do-while loop 
	 * To take user input till all the conditions are true
	 * Condition 1 - Both Values should be non-Negative and greater than Zero
	 * Condition 2 - Start should not be less than end
	 * */

	do {

		printf("Enter starting Range for Series\n");
		scanf(" %d",&start);
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		printf("Enter Ending Range for Series\n");
		scanf(" %d",&end);
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		//If statement to print error message if Condition 1 is false
		if(start <= 0 || end <= 0){
			
			printf("Invalid Input, Enter non-zero Positive Values only\n");
		}
		//else-if statement to print error message if start is greater than end, or equal to end
		else if (start >= end){

			printf("Invalid, Start value must be less than end value\n");
		}

	}while(start <= 0 || end <= 0 || end <= start);

	printf("The series of Factorials of Numbers between the Range is\n");
	for(int lc = start; lc <= end; lc++){

		//Reinitialisation of fact to clear previous value and again start from 1
		fact = 1;
		//Nested For loop to calculate Factorial for each iteration
		for(int ilc = 1; ilc <= lc; ilc++){
			fact*=ilc;
		}
		printf("Factorial of %2d is %3d\n",lc,fact);
	}
}

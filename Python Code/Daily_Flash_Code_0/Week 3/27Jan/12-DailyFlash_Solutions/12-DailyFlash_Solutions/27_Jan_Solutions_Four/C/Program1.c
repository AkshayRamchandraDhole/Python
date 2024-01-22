/* Problem Statement
 * 
 * Write a Program to print series of Even numbers ranging between two numbers entered by user.
*/

#include<stdio.h>

void main() {

	/*
	 * Variables - (type int)
	 * start - User Input for start Position of Series
	 * end   - User Input for end Position of Series
	 * */
	int start,end;

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

	/*
	 * If the starting no is odd then assign the next even number to it, Using ternary operator 
	 * */

	start %2 != 0 ? start++ : 1;

	printf("The series of Even Numbers between the Range is\n");
	/*
	 * start is always even, so the loop is incremented by 2 to reduce Iterations
	 * */

	for(int lc = start; lc <= end; lc+=2){

		printf("%2d ",lc);
	}
	printf("\n");
}

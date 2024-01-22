/* Problem Statement
 * 
 * Write a Program to print series of Even numbers in reverse order from the limiting number entered by user.
*/

#include<stdio.h>

void main() {

	/*
	 * Variables - (type int)
	 * start - User Input for start Position of Series
	 * */
	int start;

	/* do-while loop 
	 * To take user input till all the conditions are true
	 * Condition 1 - Start Value should be non-Negative and greater than Zero
	 * */

	do {

		printf("Enter starting Range for Series\n");
		scanf(" %d",&start);
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		//If statement to print error message if Condition 1 is false
		if(start <= 0){
			
			printf("Invalid Input, Enter non-zero Positive Values only\n");
		}

	}while(start <= 0);

	/*
	 * If the starting no is odd then assign the next even number to it, Using ternary operator 
	 * */

	start %2 != 0 ? start-- : 1;

	printf("The series of Even Numbers in reverse order is\n");
	/*
	 * start is always even, so the loop is decremented by 2 to reduce Iterations
	 * */

	for(int lc = start; lc >= 0; lc-=2){

		printf("%2d ",lc);
	}
	printf("\n");
}

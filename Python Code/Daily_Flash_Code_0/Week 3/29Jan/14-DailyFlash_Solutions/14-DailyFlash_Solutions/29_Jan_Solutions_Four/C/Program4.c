/* Problem Statement
 * 
 * Write a Program to print following pattern
 *
 * 3
 * 2 3 
 * 1 2 3
 * 0 1 2 3
 */

#include<stdio.h>

void main() {

	/*
	 * Variables - (type int)
	 * rows - User Input for row count
	 * */
	int rows;

	/* do-while loop 
	 * To take user input till all the conditions are true
	 * Condition 1 - Rows should be non-Negative and greater than Zero
	 * */

	do {
		//reinitialisation of variables to zero before input
		rows = 0;

		printf("Enter Number of rows\n");
		scanf(" %3d",&rows);
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		//If statement to print error message if Condition 1 is false
		if(rows <= 0 ){

			printf("Invalid Input, Enter non-zero Positive Values only\n");
		}

	}while(rows <= 0);

	for(int olc = (rows-1); olc >= 0 ; olc--){
		for(int ilc = olc; ilc < rows; ilc++){
			printf("%3d\t",ilc);
		}
		printf("\n");
	}
}




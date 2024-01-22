/* Problem Statement
 * 
 * Write a Program to print following pattern
 *
 *   1
 *   8  27 
 *  64  125  216
 * 343  512  729  1000
 */

#include<stdio.h>

void main() {

	/*
	 * Variables - (type int)
	 * rows - User Input for row count
	 * num  - ext Variable
	 * */
	int rows,num = 1;

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

	for(int olc = 0; olc < rows; olc++){
		for(int ilc = 0; ilc <= olc; ilc++){
			printf("%3d\t",num*num*num);
			num++;
		}
		printf("\n");
	}
}




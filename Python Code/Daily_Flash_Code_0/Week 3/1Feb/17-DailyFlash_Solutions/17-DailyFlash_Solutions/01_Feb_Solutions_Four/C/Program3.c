/* Problem Statement
 * 
 * Write a Program to Convert the Hours entered by user into Seconds.
 */

#include<stdio.h>

void main() {

	/*
	 * Variables - (type float)
	 * hour - User Input for time in hours
	 * */
	float hours = 0.0;

	/* do-while loop 
	 * To take user input till all the conditions are true
	 * Condition 1 - hours should be non-Negative and greater than Zero
	 * */

	do {
		//reinitialisation of variables to zero before input
		hours = 0;

		printf("Enter Time in hrs \n");
		scanf("%f",&hours);
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		//If statement to print error message if Condition 1 is false
		if(hours <= 0.0){

			printf("Invalid Input, Enter non-zero Positive Values only\n");
		}

	}while(hours <= 0.0);

	printf("The entered Time %.2f in Seconds is : %d\n",hours,(int)(hours*60*60));
}

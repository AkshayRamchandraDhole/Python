/* Problem Statement
 * 
 * Write a Program to Implement Ohms Law
 * Note: V = I*R, where, v is voltage, I is current & R is resistance
 */

#include<stdio.h>

void main() {

	/*
	 * Variables - (type int)
	 * i - User Input for current
	 * r - User Input for resistance
	 * */
	int i,r;

	/* do-while loop 
	 * To take user input till all the conditions are true
	 * Condition 1 - Both Values should be non-Negative and greater than Zero
	 * */

	do {
		//reinitialisation of variables to zero before input
		i = 0,r = 0;

		printf("Enter Current in Amperes\n");
		scanf(" %d",&i);
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		printf("Enter resistance in ohms\n");
		scanf(" %d",&r);
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		//If statement to print error message if Condition 1 is false
		if(i <= 0 || r <= 0){

			printf("Invalid Input, Enter non-zero Positive Values only\n");
		}

	}while(i <= 0 || r <= 0 );

	//Voltage is given by product of current and resistance
	int v = i*r;
	printf("The voltage V = %d volts\n",v);
}

/* Problem Statement
 * 
 * Write a Program to calculate Velocity of particle in the space having Distance & Time Entered By User
 */

#include<stdio.h>

void main() {

	/*
	 * Variables - (type int)
	 * dist - User Input for Distance in metres
	 * time - User Input for Time in seconds
	 * */
	int dist,time;

	/* do-while loop 
	 * To take user input till all the conditions are true
	 * Condition 1 - Both Values should be non-Negative and greater than Zero
	 * */

	do {
		//reinitialisation of variables to zero before input
		dist = 0,time = 0;

		printf("Enter distance in metres\n");
		scanf(" %d",&dist);
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		printf("Enter time in seconds\n");
		scanf(" %d",&time);
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		//If statement to print error message if Condition 1 is false
		if(dist <= 0 || time <= 0){

			printf("Invalid Input, Enter non-zero Positive Values only\n");
		}
		
	}while(dist <= 0 || time <= 0);

	//Need to typecast any one of the operand so that operation is carried out in floating point
	float vel = (float)dist/time;
	
	//4.2f specifies that the floating number is of 4 digits, with 2 digit precision
	//printf("Velocity of Particle roaming in space is %4.2f m/s\n",vel);

	//To have only integer ans
	printf("Velocity of Particle roaming in space is %2d m/s\n",(int)vel);


}





/* Problem Statement
 * 
 * Write a Program that calculates Kinetic Energy of object with given Mass & Velocity.
 * {Note: K.E. = 1⁄2 * m * v * v }
 */

#include<stdio.h>

void main() {

	/*
	 * Variables - (type int)
	 * mass - User Input for mass
	 * velocity - User Input for velocity
	 * */
	int mass,velocity;

	/* do-while loop 
	 * To take user input till all the conditions are true
	 * Condition 1 - Both Values should be non-Negative and greater than Zero
	 * */

	do {
		//reinitialisation of variables to zero before input
		mass = 0,velocity = 0;

		printf("Enter mass in Kg\n");
		scanf(" %d",&mass);
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		printf("Enter velocity in m/s\n");
		scanf(" %d",&velocity);
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		//If statement to print error message if Condition 1 is false
		if(mass <= 0 || velocity <= 0){

			printf("Invalid Input, Enter non-zero Positive Values only\n");
		}

	}while(mass <= 0 || velocity <= 0 );

	float KE = ((float)1/2) * mass * velocity * velocity;
	printf("The Kinetic Energy of that object is %4.2f\n",KE);
}

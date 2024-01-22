/* Problem Statement
 * 
 * Write a Program which detects whether the entered number is perfect or not
 * 
 * A Perfect number is a number which is equal to the sum of its Perfect divisor
 * A perfect divisor of x is the number giving remainder 0 on dividing x by number, where number != x
 */

#include<stdio.h>

void main() {

	/*
	 * Variables - (type int)
	 * num - User Input for number to check for Nerfect number
	 * sum - to store sum of all perfect divisors
	 * */
	int num,sum = 0;

	/* do-while loop 
	 * To take user input till all the conditions are true
	 * Condition 1 - Number non-Negative and greater than two (1 and 2 cannot be stated as perfect number)
	 * */

	do {

		num = 0;
		printf("Enter a number to check\n");
		scanf(" %d",&num);
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		//If statement to print error message if Condition 1 is false
		if(num <= 2){

			printf("Invalid Input, Enter Positive Values greater than 2 only\n");
		}

	}while(num <= 0);

	//for loop to check for all divisors from 1 to the entered number, excluding the number itself
	for(int lc = 1; lc < num; lc++){

		//If condition to check for perfect divisor, if yes add the number to sum
		if(num % lc == 0)
			sum+=lc;
	}

	//If condition to check if the entered number is a perfect number
	if(num == sum)
		printf("Entered Number %2d is a perfect number\n",num);
	else
		printf("Entered Number %2d is not a perfect number\n",num);
}

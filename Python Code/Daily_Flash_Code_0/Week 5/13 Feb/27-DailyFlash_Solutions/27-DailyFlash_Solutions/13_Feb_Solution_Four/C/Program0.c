/* Problem Statement
 *
 * Program0 -- Write a Program to check whether the entered number is Strong Number or Not.
 * {Note: A number can be termed as strong number; if the sum of factorials of each digit from that number is equal to that number, itself.
 * e.g. 145 is a Strong Number since 1 + 24 + 120 = 145.}
 *
 * */

//Include Header File for all input output Operations
#include <stdio.h>

/* 
 * Entry Point function main
 * Function Name - main
 * Function Return Type - void
 * Function Arguments - void
 * */
void main() {

	/*
	 * Declarations
	 * num_input_1 - Integer type variable for user input
	 * sum - To store sum of factorials
	 * fact - To store factorial of number
	 * */
	int num_input_1,sum = 0,temp = 0,fact = 1;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */
	do {
		printf("Enter A number \n");
		/*
		 * if there is character input the scanf returns 0, Hence for unsuccesfull return of scanf execute
		 * */
		if(!scanf("%d",&num_input_1)){

			printf("Character Inputs not allowed, Enter Positive Integers only\n");
			//Store all the character input in a temporary string
			char* tmp;
			scanf("%s",tmp);
			num_input_1 = 0;
		}
		//else-if statement if Condition 1 is false
		else if(num_input_1 <= 0){

			printf("Invalid, Only Positive values allowed\n");
		}

	}while(num_input_1 <= 0);

	temp = num_input_1;

	//While loop to separate each digit of the number
	while(temp > 0){

		/*
		 * Reinitialisation of fact to 1, for each iteration of while-loop
		 * int digit - to store the separated digit for further calculations
		 * */
		fact = 1;
		int digit = (temp%10);

		//For loop to calculate factorial of Each digit
		for(int lc = 1; lc <= digit; lc++){

			fact*=lc;
		}

		//Add factorial of each digit to the sum
		sum+=fact;
		temp/=10;
	}

	//If-else to check for Strong Number
	if(sum == num_input_1){

		printf("The Number %d is a Strong Number \n",num_input_1);
	}
	else {

		printf("The Number %d is a not a Strong Number \n",num_input_1);
	}

}

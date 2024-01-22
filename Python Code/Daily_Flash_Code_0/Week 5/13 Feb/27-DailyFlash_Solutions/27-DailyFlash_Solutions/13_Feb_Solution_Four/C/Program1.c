/* Problem Statement
 *
 * Program4 -- Write a Program that takes a number as input from user and prints the counts the occurrence of Odd Digits & Even Digits from it
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
	 * sum = To store sum of digits
	 * temp - To store a temporary number for calculations
	 * */
	int num_input_1,temp = 0,sum = 0;

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

		sum+=(temp%10);
		temp/=10;
	}

	//Print Sum of Digits
	printf("The Sum of Digits of Number %d is %d\n",num_input_1,sum);
}

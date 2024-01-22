/* Problem Statement
 * 
 * Write a Program that accepts an integer from user and prints its second successor and second predecessor
 */

#include<stdio.h>

int cnt = 0;

void main() {

	/*
	 * Variables - (type int)
	 * num - User Input for Number
	 * */
	int num,t;

	/* do-while loop 
	 * To take user input till all the conditions are true
	 * Condition 1 - Only Integer values allowed
	 * */

	printf("Enter a Number\n");
	do {
		//reinitialisation of variables to zero before input
		num;

		t = scanf(" %d",&num);
		//If a char input is given it stays in the input stream, so need to flush it and make it empty for next input
		if(cnt == 0 && t == 0){

			printf("Invalid Input, Enter Integer Values only\n");
			getchar();
			cnt++;
		}
		else if (t == 0)
			getchar();
		else 
			cnt = 0;

	}while(t == 0);

	//Second Predecessor is 2nd number before a Number
	printf("The Second Predecessor = %2d\n",num-2);

	//Second Successor is the 2nd number after a number
	printf("The Second Successor = %2d\n",num+2);
}

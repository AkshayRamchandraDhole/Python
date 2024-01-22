/* Problem Statement
 * 
 * Write a Program that prints table in reverse order
 */

#include<stdio.h>

int cnt = 0;

void main() {

	/*
	 * Variables - (type int)
	 * num - User Input for Number
	 * order - User input for order of table
	 * */
	int num,t,order;

	/* do-while loop 
	 * To take user input till all the conditions are true
	 * Condition 1 - Only Integer values allowed
	 * Condition 2 - Only Positive Values allowed
	 * */

	printf("Enter a Number to print Table of \n");
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
		if(num <= 0){
			
			printf("Invalid, Enter Positive values only\n");
		}

	}while(t == 0 || num <= 0);

	//User Choice, to print Table in normal order or Reverse order
	printf("Choose The Order\n");
	printf("1. For normal \n");
	printf("2. For reverse \n");
	scanf("%d",&order);

	for(int lc1 = 1,lc2 = 10; lc1 <= 10 || lc2 >= 1; lc1++,lc2--){

		//For order = 2, reverse order table
		if(order == 2){

			printf("%2d X %2d = %2d\n",num,lc2,lc2*num);
		}
		//For all other input, the printing is done in Normal order
		else
			printf("%2d X %2d = %2d\n",num,lc1,lc1*num);
	}

}

/* Problem Statement
 * 
 * Write a Program to print following pattern
 *
 * 1
 * 8	27
 * 64	125	216
 * 343	512	729	1000
 */

#include<iostream>

int main() {

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

		std::cout<<"Enter Number of rows"<<std::endl;
		std::cin>>rows;
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		//If statement to print error message if Condition 1 is false
		if(rows <= 0 ){

			std::cout<<"Invalid Input, Enter non-zero Positive Values only"<<std::endl;
		}

	}while(rows <= 0);

	for(int olc = 0; olc < rows; olc++){
		for(int ilc = 0; ilc <= olc; ilc++){
			std::cout<<num*num*num<<"\t";
			num++;
		}
		std::cout<<std::endl;
	}
}




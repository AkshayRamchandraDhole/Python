/* Problem Statement
 * 
 * Write a Program to print series of Even numbers ranging between two numbers entered by user.
 */

#include<iostream>

int main() {

	/*
	 * Variables - (type int)
	 * num1 - User Input for num1 Position of Series
	 * num2 - User Input for num2 Position of Series
	 * */
	int num1,num2;

	/* do-while loop 
	 * To take user input till all the conditions are true
	 * Condition 1 - Both Values should be non-Negative and greater than Zero
	 * */

	do {

		std::cout<<"Enter Num1"<<std::endl;
		std::cin>>num1;
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		std::cout<<"Enter Num2"<<std::endl;
		std::cin>>num2;
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		//If statement to print error message if Condition 1 is false
		if(num1 <= 0 || num2 <= 0){

			std::cout<<"Invalid Input, Enter non-zero Positive Values only"<<std::endl;
		}
		//else-if condition to handle char input to integer
		else if(std::cin.fail()){
			std::cout<<"Invalid Entered value is a character"<<std::endl;
		}

	}while(num1 <= 0 || num2 <= 0 && !std::cin.fail());

	if(num1 < num2)
		std::cout<<"The minimum number amongst "<<num1<<" and "<<num2<<" is "<<num1<<std::endl;
	else 
		std::cout<<"The minimum number amongst "<<num1<<" and "<<num2<<" is "<<num2<<std::endl;


}

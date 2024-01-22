/* Problem Statement
 * 
 * Write a Program that accepts an integer from user and prints its second successor and second predecessor.
 */

#include<iostream>

int main() {

	/*
	 * Variables - (type int)
	 * num - User Input Number
	 * */

	int num;

	/* do-while loop 
	 * To take user input the condition is true
	 * Condition 1 - Value should be non-Negative and greater than Zero
	 * */

	do {

		std::cout<<"Enter a number"<<std::endl;
		std::cin>>num;
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		//If statement to print error message if Condition 1 is false
		if(num <= 0){

			std::cout<<"Invalid Input, Enter non-zero Positive Values only"<<std::endl;
		}
		//else-if condition to handle char input to integer
		else if(std::cin.fail()){
			std::cout<<"Invalid Entered value is a character"<<std::endl;
		}

	}while(num <= 0 && !std::cin.fail());

	std::cout<<"The Second Predecessor of "<<num<<" is "<<(num-2)<<std::endl;
	std::cout<<"The Second Successor of "<<num<<" is "<<(num+2)<<std::endl;

	return 0;
}

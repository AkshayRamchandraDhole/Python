/* Problem Statement
 * 
 * Write a Program that accepts Two integers from user and prints the series of factorial of all numbers between those two inputs
 * A factorial is calculated by multiplying all the numbers including the number itself till 1
 * Example Factorial of 4 = 4*3*2*1 = 24
*/

#include<iostream>

int main() {

	/*
	 * Variables - (type int)
	 * num1 - User Input for number 1
	 * num2 - User Input for number 2
	 * */
	int num1,num2;

	/* do-while loop 
	 * To take user input till all the conditions are true
	 * Condition 1 - All Values should be non-Negative and greater than Zero
	 * */

	do {

		std::cout<<"Enter Number1"<<std::endl;
		std::cin>>num1;
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		std::cout<<"Enter Number2"<<std::endl;
		std::cin>>num2;
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		//If statement to print error message if Condition 1 is false
		if(num1 <= 0 || num2 <= 0){
			
			std::cout<<"Invalid Input, Enter non-zero Positive Values only"<<std::endl;
		}
		else if(std::cin.fail()){
			std::cout<<"Invalid Entered value is a character"<<std::endl;
		}

	}while(num1 <= 0 || num2 <= 0 && !std::cin.fail());

	std::cout<<"After Division Quotient = "<<(num1/num2)<<std::endl;
	std::cout<<"After Division Remainder = "<<(num1%num2)<<std::endl;

	return 0;
}

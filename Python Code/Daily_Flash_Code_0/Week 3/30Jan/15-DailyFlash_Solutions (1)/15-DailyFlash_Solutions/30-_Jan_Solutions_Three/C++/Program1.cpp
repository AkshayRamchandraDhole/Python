/* Problem Statement
 * 
 * Write a Program which detects whether the entered number is perfect or not
 * 
 * A Perfect number is a number which is equal to the sum of its Perfect divisor
 * A perfect divisor of x is the number giving remainder 0 on dividing x by number, where number != x
*/

#include<iostream>

int main() {

	/*
	 * Variables - (type int)
	 * num1 - User Input for num1
	 * num2 - User Input for num2
	 * */
	int num1,num2;

	/* do-while loop 
	 * To take user input till all the conditions are true
	 * Condition 1 - Both Values should be non-Negative and greater than Zero
	 * */

	do {

		std::cout<<"Enter first number"<<std::endl;
		std::cin>>num1;
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		std::cout<<"Enter Second number"<<std::endl;
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

	std::cout<<"Before swap num1 = "<<num1<<" and num2 = "<<num2<<std::endl;
	
	//Add the another number to swap in the first number, num1 will have addition of num1 and num2
	num1 = num1 + num2;
	
	//Subtract the added number from num1 and store in num2, num2 will have value of num1, num1 still has the sum 
	num2 = num1 - num2;
	
	//Now subtract the num2 from num1, and assign it to num1, num1 will have value of actual num2
	num1 = num1 - num2;

	std::cout<<"After swap num1 = "<<num1<<" and num2 = "<<num2<<std::endl;
	
	return 0;
}

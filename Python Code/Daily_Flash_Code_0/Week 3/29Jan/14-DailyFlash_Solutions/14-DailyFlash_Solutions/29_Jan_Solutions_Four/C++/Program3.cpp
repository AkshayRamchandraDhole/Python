/* Problem Statement
 * 
 * Write a Program to take input length and breadth of rectangle and calculate its area.
 */

#include<iostream>

int main() {

	/*
	 * Variables - (type int)
	 * length - User Input for current in amperes
	 * breadth - User Input for resistance Position of Series
	 * */
	int length,breadth;

	/* do-while loop 
	 * To take user input till all the conditions are true
	 * Condition 1 - Both Values should be non-Negative and greater than Zero
	 * */

	do {

		std::cout<<"Enter length in meters"<<std::endl;
		std::cin>>length;
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		std::cout<<"Enter breadth in meters"<<std::endl;
		std::cin>>breadth;
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		//If statement to print error message if Condition 1 is false
		if(length <= 0 || breadth <= 0){

			std::cout<<"Invalid Input, Enter non-zero Positive Values only"<<std::endl;
		}
		//else-if condition to handle char input to integer
		else if(std::cin.fail()){
			std::cout<<"Invalid Entered value is a character"<<std::endl;
		}

	}while(length <= 0 || breadth <= 0 && !std::cin.fail());

	//Area a = length(l) * breadth(b)
	int area = length*breadth;
	std::cout<<"The Area of Rectangle A = "<<area<<" m^2"<<std::endl;

	return 0;
}

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
	 * start - User Input for start Position of Series
	 * end   - User Input for end Position of Series
	 * fact  - To store factorial of a number
	 * */
	int start,end,fact = 1;

	/* do-while loop 
	 * To take user input till all the conditions are true
	 * Condition 1 - Both Values should be non-Negative and greater than Zero
	 * Condition 2 - Start should not be less than end
	 * */

	do {

		std::cout<<"Enter starting Range for Series"<<std::endl;
		std::cin>>start;
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		std::cout<<"Enter Ending Range for Series"<<std::endl;
		std::cin>>end;
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		//If statement to print error message if Condition 1 is false
		if(start <= 0 || end <= 0){
			
			std::cout<<"Invalid Input, Enter non-zero Positive Values only"<<std::endl;
		}
		//else-if statement to print error message if start is greater than end, or equal to end
		else if (start >= end){

			std::cout<<"Invalid, Start value must be less than end value"<<std::endl;
		}
		else if(std::cin.fail()){
			std::cout<<"Invalid Entered value is a character"<<std::endl;
		}

	}while(start <= 0 || end <= 0 || end <= start && !std::cin.fail());

	std::cout<<"The series of Factorials of Numbers between the Range is"<<std::endl;

	for(int lc = start; lc <= end; lc++){
		
		//Reinitialisation of fact to 1 for every iteration
		fact = 1;
		//Inner for loop to calculate factorial of each number in the range
		for(int ilc = 1; ilc <= lc; ilc++){
			fact *= ilc;
		}
		std::cout<<"Factorial of "<<lc<<" : "<<fact<<" "<<std::endl;
	}
}

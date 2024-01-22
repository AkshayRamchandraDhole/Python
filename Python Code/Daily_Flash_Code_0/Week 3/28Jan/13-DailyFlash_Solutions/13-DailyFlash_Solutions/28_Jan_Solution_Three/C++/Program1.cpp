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
	 * start - User Input for start Position of Series
	 * end   - User Input for end Position of Series
	 * sum   - To store the sum of perfect divisor
	 * */
	int num,sum = 0;

	/* do-while loop 
	 * To take user input till all the conditions are true
	 * Condition 1 - Both Values should be non-Negative and greater than Zero
	 * Condition 2 - Start should not be less than end
	 * */

	do {

		std::cout<<"Enter a number to check"<<std::endl;
		std::cin>>num;
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		//If statement to print error message if Condition 1 is false
		if(num <= 0){
			
			std::cout<<"Invalid Input, Enter non-zero Positive Values only"<<std::endl;
		}
		else if(std::cin.fail()){
			std::cout<<"Invalid Entered value is a character"<<std::endl;
		}

	}while(num <= 0 && !std::cin.fail());
	
	for(int lc = 1; lc < num; lc++){
	
		//If condition to check for perfect divisor, if yes add the number to sum
		if(num % lc == 0)
			sum+=lc;

	}
	//If condition to check if the entered number is a perfect number
	if(num == sum)
		std::cout<<"Entered Number "<<num<<" is a perfect number"<<std::endl;
	else
		std::cout<<"Entered Number "<<num<<" is not a perfect number"<<std::endl;
}

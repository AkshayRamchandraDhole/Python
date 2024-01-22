/* Problem Statement
 * 
 * Write a Program to Implement Ohms Law
 * Note: V = I*R, where, v is voltage, I is current & R is resistance
 */

#include<iostream>

int main() {

	/*
	 * Variables - (type int)
	 * i - User Input for current in amperes
	 * r - User Input for resistance Position of Series
	 * */
	int i,r;

	/* do-while loop 
	 * To take user input till all the conditions are true
	 * Condition 1 - Both Values should be non-Negative and greater than Zero
	 * */

	do {

		std::cout<<"Enter current in amperes"<<std::endl;
		std::cin>>i;
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		std::cout<<"Enter resistance in ohms"<<std::endl;
		std::cin>>r;
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		//If statement to print error message if Condition 1 is false
		if(i <= 0 || r <= 0){

			std::cout<<"Invalid Input, Enter non-zero Positive Values only"<<std::endl;
		}
		//else-if condition to handle char input to integer
		else if(std::cin.fail()){
			std::cout<<"Invalid Entered value is a character"<<std::endl;
		}

	}while(i <= 0 || r <= 0 && !std::cin.fail());

	//Voltage v = current(i) * resistance(r)
	int v = i*r;
	std::cout<<"The Voltage V = "<<v<<" volts"<<std::endl;

}

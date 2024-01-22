/* Problem Statement
 * 
 * Write a Program to print series of Even numbers ranging between two numbers entered by user.
 */

#include<iostream>

int main() {

	/*
	 * Variables - (type int)
	 * dist - User Input for distance in meters
	 * time - User Input for time Position of Series
	 * */
	int dist,time;

	/* do-while loop 
	 * To take user input till all the conditions are true
	 * Condition 1 - Both Values should be non-Negative and greater than Zero
	 * */

	do {

		std::cout<<"Enter distance in meters"<<std::endl;
		std::cin>>dist;
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		std::cout<<"Enter time in seconds"<<std::endl;
		std::cin>>time;
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		//If statement to print error message if Condition 1 is false
		if(dist <= 0 || time <= 0){

			std::cout<<"Invalid Input, Enter non-zero Positive Values only"<<std::endl;
		}
		//else-if condition to handle char input to integer
		else if(std::cin.fail()){
			std::cout<<"Invalid Entered value is a character"<<std::endl;
		}

	}while(dist <= 0 || time <= 0 && !std::cin.fail());

	float vel = (float)dist/time;
	std::cout<<"The velocity of a Particle roaming in space is "<<vel<<" m/s"<<std::endl;

}

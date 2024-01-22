/* Problem Statement
 * 
 * Write a Program that calculates Kinetic Energy of object with given Mass & Velocity.
 * {Note: K.E. = 1⁄2 * m * v * v }
 */

#include<iostream>

int main() {

	/*
	 * Variables - (type int)
	 * mass      - User Input for Mass in KG
	 * velocity  - User Input for Velocity Position of Series
	 * Variables - (type float)
	 * ke        - To Store Kinetic Energy
	 * */
	int mass,velocity;

	/* do-while loop 
	 * To take user input till all the conditions are true
	 * Condition 1 - Both Values should be non-Negative and greater than Zero
	 * */

	do {

		std::cout<<"Enter Mass in KG"<<std::endl;
		std::cin>>mass;
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		std::cout<<"Enter Velocity in m/s"<<std::endl;
		std::cin>>velocity;
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		//If statement to print error message if Condition 1 is false
		if(mass <= 0 || velocity <= 0){

			std::cout<<"Invalid Input, Enter non-zero Positive Values only"<<std::endl;
		}
		//else-if condition to handle char input to integer
		else if(std::cin.fail()){
			std::cout<<"Invalid Entered value is a character"<<std::endl;
		}

	}while(mass <= 0 || velocity <= 0 && !std::cin.fail());

	//Voltage v = Mass(mass) * Velocity(velocity)
	float ke  = mass*velocity*velocity*((float)1/2);
	std::cout<<"The Kinetic Energy of the Object is KE = "<<ke<<std::endl;

	return 0;
}

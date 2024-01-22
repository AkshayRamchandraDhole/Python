/* Problem Statement
 *
 * Program4 -- Write a Program that takes a number as input from user and prints the counts the occurrence of Odd Digits & Even Digits from it
 *
 * */


//Include Header File for all input output Operations
#include <iostream>

/* 
 * Entry Point function main
 * Function Name - main
 * Function Return Type - int
 * Function Arguments - void
 * */

using namespace std;

int main() {

	/*
	 * Declarations
	 * num_input_1 - Integer type variable for user input
	 * ocnt - To store Count of Odd Digits
	 * ecnt - To store Count of Even Digits
	 * temp - To store a temporary number for calculations
	 * */
	int num_input_1,temp = 0,ocnt = 0,ecnt = 0;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */
	do {
		std::cout<<"Enter A number \n";
		/*
		 * if there is character input the cin returns 0, Hence for unsuccesfull return of cin execute
		 * */

		std::cin>>num_input_1;

		//if statement if Condition 1 is false
		if(num_input_1 <= 0){

			std::cout<<"Invalid, Only Positive values allowed"<<std::endl;
		}
		else if(std::cin.fail()){

			std::cout<<"Characters are not allowed"<<std::endl;
		}
		else 
			break;

	}while(!std::cin.fail() && num_input_1 <= 0);

	temp = num_input_1;

	while(temp > 0){

		if((temp%10)%2 == 0)
			ecnt++;
		else
			ocnt++;
		temp/=10;
	}
	std::cout<<"The Number "<< num_input_1 << " Contains "<<ecnt<<" even digits and "<<ocnt<<" odd digits"<<endl;
}

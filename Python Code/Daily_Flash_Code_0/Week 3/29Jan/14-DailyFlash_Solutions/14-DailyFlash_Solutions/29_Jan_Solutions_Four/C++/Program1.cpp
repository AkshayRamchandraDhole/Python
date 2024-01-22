/* Problem Statement
 * 
 * Write a Program to print table in reverse order.
 */

#include<iostream>

int main() {

	/*
	 * Variables - (type int)
	 * num - User Input Number
	 * order - User choice for table order
	 * */

	int num,order;

	/* do-while loop 
	 * To take user input the condition is true
	 * Condition 1 - Value should be non-Negative and greater than Zero
	 * */

	do {

		std::cout<<"Enter a number to print table of"<<std::endl;
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

	std::cout<<"Choose Table order"<<std::endl;
	std::cout<<"1. Normal Order"<<std::endl;
	std::cout<<"2. Reverse Order"<<std::endl;
	std::cin>>order;

	for(int lc = 1, lc2 = 10; lc <= 10 || lc2 >= 1; lc++,lc2--){

		if(order == 2){

			std::cout<<num<<" X "<<lc2<<" : "<<(num*lc2)<<std::endl;
		}
		else{

			std::cout<<num<<" X "<<lc<<" : "<<(num*lc)<<std::endl;
		}
	}
	return 0;
}

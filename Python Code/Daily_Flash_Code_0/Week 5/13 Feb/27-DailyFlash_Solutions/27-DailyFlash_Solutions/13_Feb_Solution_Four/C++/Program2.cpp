/* Problem Statement
 *
 * Program0 -- Write a Program to check whether the entered number by user is Deficient or not.
 * {Note: A Number is termed as deficient number, if sum of all of its perfect divisors is less than the number itself. E.g. 15 is deficient number, since 1 + 3 + 5 = 9 < 15.}
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
	 * sum - To store sum of perfect divisors
	 * */
	int num_input_1,sum = 0;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */
	do {
		cout<<"Enter A number \n";
		/*
		 * if there is character input the cin returns 0, Hence for unsuccesfull return of cin execute
		 * */

		cin>>num_input_1;

		//if statement if Condition 1 is false
		if(num_input_1 <= 0){

			cout<<"Invalid, Only Positive values allowed"<<endl;
		}
		else if(std::cin.fail()){

			cout<<"Characters are not allowed"<<endl;
		}
		else 
			break;

	}while(!std::cin.fail() && num_input_1 <= 0);

	int temp = num_input_1;

	while(temp > 0){

		sum+=(temp%10);
		temp/=10;
	}
	cout<<"The Sum of digits from Number "<< num_input_1 << " is "<<sum<<endl;
}

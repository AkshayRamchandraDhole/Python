/* Problem Statement
 *
 * Program1 -- Write a Program to Convert entered Octal Number to Decimal Number
 *
 * */

//Include Header File for all input output Operations
#include<iostream>

int power(int number, int index){

	int answer = 1;
	if (index == 0){
		return 1;
	}
	else {
		while(index > 0){

			answer*=number;
			index--;
		}
		return answer;
	}
}


/* 
 * Entry Point function main
 * Function Name - main
 * Function Return Type - int
 * Function Arguments - void
 * */

int main() {

	/*
	 * Declarations
	 * num_input_1 - Integer type variable for user input
	 * sum - To store sum of digits 
	 * */
	int flag = 1,pow = -1;
	char HexString[50];

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs and HexaDecimal Characters are allowed
	 * */
	do {
		std::cout<<"Enter a HexaDecimal Number "<<std::endl;

		std::cin>>HexString;
		pow = -1;
		char* temp = HexString;
		while(*temp != '\0'){

			if( (*temp >= 65 && *temp <= 70) || (*temp >= 48 && *temp <= 57 ) ){

				pow++;
				flag = 0;
			}
			else { 
				flag = 1;
				std::cout<<"Entered Number is not a Hexadecimal Number"<<std::endl;
				break;
			}
			temp++;
		}

	}while(flag);

	int decimal = 0;

	char *temp = HexString;

	while(*temp != '\0'){

		if( (*temp >= 48 && *temp <= 57 ) ){

			decimal = decimal + ((*temp-48) * (power(16,pow)));

		}
		else {
			decimal = decimal + ((*temp) * power(16,pow));
		}
		pow--;
		temp++;
	}


	std::cout<<"The Decimal Number of "<< HexString <<" is "<< decimal<<std::endl;;

}



/* Problem Statement
 *
 * Program2 -- Write a Program to that accepts an integer value from user and prints all even numbers from that number to 0 using while loop. 
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

int main() {

	/*
	 * Declarations
	 * rows - Integer type variable for user input of rows 
	 * */
	int rows;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */
	do {
		std::cout<<"Enter Number of Rows"<<std::endl;
		/*
		 * if there is character input the cin returns 0, Hence for unsuccesfull return of cin execute
		 * */
		std::cin>>rows;
		if(!std::cin.fail()){

			std::cout<<"Character Inputs not allowed, Enter Positive Integers only"<<std::endl;

		}
		//else-if statement if Condition 1 is false
		else if(rows <= 0){

			std::cout<<"Invalid, Only Positive values allowed"<<std::endl;
		}

	}while(rows <= 0 && !std::cin.fail());

	std::cout<<"The output of Pattern is "<<std::endl;

	//Outer for loop is for Number of Rows
	for(int olc = 0; olc < rows; olc++){

		//Inner for loop is for Number of Columns
		for(int ilc = 0; ilc < rows; ilc++){
		
			(olc+ilc) >= (rows-1) ? std::cout<<(char)(rows+64-ilc)<<(ilc+olc)<<"\t" : std::cout<<"\t";

		}

		std::cout<<std::endl;
	}

}



/*
 * Dry Run of Outer For loop 
 * Let input = rows = 4
 * Initialisation	Condition		Operation-1		
 * 						Inner For Loop	 						(Printing)		olc++
 * 						Initialisation		Condition	Ternaary Operation	Operation-2	ilc++  	(olc)
 *																(ilc)	
 *
 * 1] olc = 0		0 < 4 True		ilc = 0			0 < 4 True	0+0 >= 3 False		'  \t'		1
 * 									1 < 4 True	0+1 >= 3 False		'  \t'		2
 * 									2 < 4 True	0+2 >= 3 False		'  \t'		3
 * 									3 < 4 True	0+3 >= 3 True		'D3\t'		4
 * 									4 < 4 True	Exit			'\n'			1
 * 
 * 2] olc = 1		1 < 4 True		ilc = 0			0 < 4 True	1+0 >= 3 False		'  \t'		1
 * 									1 < 4 True	1+1 >= 3 False		'  \t'		2
 * 									2 < 4 True	1+2 >= 3 True		'C3\t'		3
 * 									3 < 4 True	1+3 >= 3 True		'C4\t'		4
 * 									4 < 4 True	Exit			'\n'			2
 * 
 * 3] olc = 2		2 < 4 True		ilc = 0			0 < 4 True	2+0 >= 3 False		'  \t'		1
 * 									1 < 4 True	2+1 >= 3 True		'B3\t'		2
 * 									2 < 4 True	2+2 >= 3 True		'B4\t'		3
 * 									3 < 4 True	2+3 >= 3 True		'B5\t'		4
 * 									4 < 4 True	Exit			'\n'			3
 * 
 * 4] olc = 3		3 < 4 True		ilc = 0			0 < 4 True	3+0 >= 3 True		'A3\t'		1
 * 									1 < 4 True	3+1 >= 3 True		'A4\t'		2
 * 									2 < 4 True	3+2 >= 3 True		'A5\t'		3
 * 									3 < 4 True	3+3 >= 3 True		'A6\t'		4
 * 									4 < 4 True	Exit			'\n'			4
 * 
 * 5] olc = 4		4 < 4 False		Exit
 * 
 * */

/* Problem Statement
 *
 * Program3 -- Write a Program to Print the following pattern. 
 * 	 	 	 	A3
 *		 	B3	A4
 *		C3	B4	A5
 *	D3	C4	B5	A6
 *
 * */

//Include Header File for all input output Operations
#include <stdio.h>

/* 
 * Entry Point function main
 * Function Name - main
 * Function Return Type - void
 * Function Arguments - void
 * */
void main() {

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
		printf("Enter Number of Rows\n");
		/*
		 * if there is character input the scanf returns 0, Hence for unsuccesfull return of scanf execute
		 * */
		if(!scanf("%d",&rows)){

			printf("Character Inputs not allowed, Enter Positive Integers only\n");
			//Store all the character input in a temporary string
			char* tmp;
			scanf("%s",tmp);
			rows = 0;
		}
		//else-if statement if Condition 1 is false
		else if(rows <= 0){

			printf("Invalid, Only Positive values allowed\n");
		}

	}while(rows <= 0);

	printf("The output of Pattern is \n");

	//Outer for loop is for Number of Rows
	for(int olc = 0; olc < rows; olc++){

		//Inner for loop is for Number of Columns
		for(int ilc = 0; ilc < rows; ilc++){

			(olc+ilc) >= (rows-1) ? printf("%c%d\t",(rows+64-ilc),(ilc+olc)) : printf(" \t");
		}
		printf("\n");	
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

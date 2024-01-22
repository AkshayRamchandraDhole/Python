/* Problem Statement
 * 
 * Write a Program to take input length and breadth of rectangle and calculate its area.
 */

#include<stdio.h>

void main() {

	/*
	 * Variables - (type int)
	 * date - User Input for date
	 * month - User Input for month
	 * year - User Input for year
	 * */
	int year,month,date;

	/* do-while loop 
	 * To take user input till all the conditions are true
	 * Condition 1 - All Values should be non-Negative and greater than Zero
	 * Condition 2 - Year should not exceed 9999
	 * Condition 3 - Month should not exceed 12
	 * Condition 4 - Date should not exceed 31
	 * */

	printf("Enter Date in dd/mm/yyyy format\n");
	do {
		//reinitialisation of variables to zero before input
		date = 0,month = 0,year = 0;

		scanf("%d",&date);
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		scanf(" %d",&month);
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		scanf(" %d",&year);
		//If a char input is given it stays in the input stream, so need a char to  flush it and make it empty for next input
		getchar();

		//If statement to print error message if Condition 1 or Condition 3 is false
		if(month <= 0 || month > 12){

			printf("Invalid Input, Month cannot be greater than 12 or negative\n");
		}
		//If statement to print error message if Condition 1 or Condition 4 is false
		else if(date <= 0 || date > 31){

			printf("Invalid Input, Date cannot be greater than 31 or negative\n");
		}
		//If statement to print error message if Condition 1 or Condition 2 is false
		if(year <= 0 || year > 9999){

			printf("Invalid Input, Month cannot exceed 9999 or negative\n");
		}

	}while((month <= 0 || month > 12) || (date <= 0 || date > 31) || (year <= 0 || year > 9999) );

	//If else ladder to check for validity of date
	//First check if the month is february
	if (month == 2){

		//If February the all the dates including 28 are valid
		if (date <= 28){

			printf("Entered date %2d/%2d/%4d is Valid\n",date,month,year);
		}

		//If february and Leap year then only 29 date is valid
		else if((date <= 29) && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))){

			printf("Entered date %2d/%2d/%4d is Valid\n",date,month,year);
		}

		//All the rest dates for february are invalid
		else {

			printf("Entered date %2d/%2d/%4d is InValid\n",date,month,year);
		}
	}

	//If the months are April,June,Septeber or November then all dates including 30 are valid
	else if(date <= 30 && (month == 4 || month == 6 || month == 9 || month == 11)){

		printf("Entered date %2d/%2d/%4d is Valid\n",date,month,year);
	}
	
	//If the months are January, March, July, August, October or December then all dates including 31 are valid
	else if(date <= 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)){

		printf("Entered date %2d/%2d/%4d is Valid\n",date,month,year);
	}

	//Rest all dates are invalid
	else {

		printf("Entered date %2d/%2d/%4d is InValid\n",date,month,year);
	}
}

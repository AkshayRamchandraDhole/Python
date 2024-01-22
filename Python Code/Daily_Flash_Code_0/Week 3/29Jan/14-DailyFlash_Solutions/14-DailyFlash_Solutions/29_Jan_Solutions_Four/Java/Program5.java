/* Problem Statement
 * 
 *Write a Program which accepts date month and year from user and check for the validity of date according to month
 * */

//Import IO package for input Operations
import java.io.*;

class Dates {

	public static void main(String[] args)throws IOException {

		//Buffered Reader Object to create input stream for data input
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		/*
		 * Variables - (type int)
		 * date - User Input for date
		 * month - User Input for month
		 * year - User Input for year
		 * */

		int date = 0,month = 0,year = 0;
		boolean flag = false;

		/* do-while loop 
		 * To take user input till all the conditions are true
		 * Condition 1 - All Values should be non-Negative and greater than Zero
		 * Condition 2 - Year should not exceed 9999
		 * Condition 3 - Month should not exceed 12
		 * Condition 4 - Date should not exceed 31
		 * */

		System.out.println("Enter date in dd/mm/yyyy format");
		do {
			//reinitialisation of variables to zero before input
			date = 0;
			month = 0;
			year = 0;


			//Try catch to handle run-time Exception for char input instead of integer
			try {

				String x = br.readLine();
				String[] arr = x.split("/",3);

				date = Integer.parseInt(arr[0]);
				month = Integer.parseInt(arr[1]);
				year = Integer.parseInt(arr[2]);
				flag = true;
			}
			catch(NumberFormatException o){

				System.out.println("Invalid format, only Integers allowed");
			}

			if(flag){
				//If statement to print error message if Condition 1 or Condition 4 is false
				if(date <= 0 || date > 31){

					System.out.println("Invalid Input, Date cannot be greater than 31 or negative");
				}

				//If statement to print error message if Condition 1 or Condition 3 is false
				if(month <= 0 || month > 12){

					System.out.println("Invalid Input, Month cannot be greater than 12 or negative");
				}
				//If statement to print error message if Condition 1 or Condition 2 is false
				if(year <= 0 || year > 9999){

					System.out.println("Invalid Input, Year cannot be greater than 9999 or negative");
				}
			}

		}while( ((month <= 0 || month > 12) || (date <= 0 || date > 31) || (year <= 0 || year > 9999)) );


		//If else ladder to check for validity of date
		//First check if the month is february
		if (month == 2){

			//If February the all the dates including 28 are valid
			if (date <= 28){

				System.out.println("The Date "+date+"/"+month+"/"+year+" is valid");
			}

			//If february and Leap year then only 29 date is valid
			else if((date <= 29) && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))){

				System.out.println("The Date "+date+"/"+month+"/"+year+" is valid");
			}

			//All the rest dates for february are invalid
			else {

				System.out.println("The Date "+date+"/"+month+"/"+year+" is Invalid");
			}
		}

		//If the months are April,June,Septeber or November then all dates including 30 are valid
		else if(date <= 30 && (month == 4 || month == 6 || month == 9 || month == 11)){

			System.out.println("The Date "+date+"/"+month+"/"+year+" is valid");
		}

		//If the months are January, March, July, August, October or December then all dates including 31 are valid
		else if(date <= 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)){

			System.out.println("The Date "+date+"/"+month+"/"+year+" is valid");
		}

		//Rest all dates are invalid
		else {

			System.out.println("The Date "+date+"/"+month+"/"+year+" is Invalid");
		}
	}
}

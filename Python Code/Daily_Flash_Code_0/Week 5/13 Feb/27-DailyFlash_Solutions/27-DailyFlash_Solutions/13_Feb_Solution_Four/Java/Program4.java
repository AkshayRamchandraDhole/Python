//Import io package for all Input Output Operations
import java.io.*;

//User defined class to Find Deficient Number
class Count {

	//Entry Point Function main, throws IOException as the readLine method of BufferedReader throws Exception
	public static void main(String[] args) throws IOException {

		//To make a connection between Java code and Keyboard for Input 
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));

		/* 
		 * Declarations
		 * Integer Variables
		 * num_input_1 - To store User Input
		 * sum - To store sum of Perfect divisors of Input Number
		 *
		 * */

		int num_input_1 = 0,temp,ecnt = 0,ocnt = 0;

		/*
		 * Test Conditions
		 * Condition1 - Number Should be greater than 0 
		 * Condition2 - Character/String Input Not allowed
		 * 
		 * */

		//do-while loop to take user input till all conditions are true
		do {
			System.out.println("Enter a Number");

			//Try-catch to Handle Character input 
			try {
				num_input_1 = Integer.parseInt(b.readLine());

				if(num_input_1 <= 0)
					System.out.println("Invalid, Enter Positive Numbers Only");
			}
			catch(NumberFormatException n){

				System.out.println("Invalid, Enter Numbers Only");
			}

		}while(num_input_1 <= 0);

		temp = num_input_1;

		while(temp > 0){

			if((temp%10)%2 == 0)
				ecnt++;
			else
				ocnt++;
			temp/=10;
		}

		//If-else to check for deficient Number
		System.out.println("The Entered Number "+num_input_1+" has "+ecnt+" Even digits and "+ocnt+" odd Digits");

	}
}

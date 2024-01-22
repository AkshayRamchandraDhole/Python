//Import io package for all Input Output Operations
import java.io.*;

//User defined class to convert Hexadecimal Number to decimal
class Decimal {

	//Entry Point Function main, throws IOException as the readLine method of BufferedReader throws Exception
	public static void main(String[] args) throws IOException {

		//To make a connection between Java code and Keyboard for Input 
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));

		/* 
		 * Declarations
		 * Integer Variables
		 * num_input_1 - To store User Input
		 *
		 * */

		String num_input_1 = null;

		/*
		 * Test Conditions
		 * Condition1 - Number Should be greater than 0 
		 * Condition2 - Only HexaDecimal Characters are allowed
		 * 
		 * */

		//do-while loop to take user input till all conditions are true
		do {
			System.out.println("Enter Hexadecimal Number");

			//Try-catch to Handle Character input 
			try {
				num_input_1 = b.readLine();

			}
			catch(NumberFormatException n){

				System.out.println("Invalid, Enter in Proper Format");
			}

		}while(num_input_1 == null);

		//To convert Octal to Decimal parseInt method with first parameter String and Second base
		System.out.println(Integer.parseInt(num_input_1,16));	

	}
}

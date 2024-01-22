/* Problem Statement
 * 
 * Write a Program that accepts Two integers from user and prints the series of factorial of all numbers between those two inputs
 * A factorial is calculated by multiplying all the numbers including the number itself till 1
 * Example Factorial of 4 = 4*3*2*1 = 24
 * */

//Import IO package for input Operations
import java.io.*;

class FactSeries {

	public static void main(String[] args)throws IOException {

		//Buffered Reader Object to create input stream for data input
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int num1 = 0,num2 = 0, fact = 1;
		System.out.println("Enter a start and end of the range");
		do {
			//Try catch to handle run-time Exception for char input instead of integer
			try {
				//parseint method to convert string to integer
				num1 = Integer.parseInt(br.readLine());
				num2 = Integer.parseInt(br.readLine());
				if(num1 <= 0 || num2 <= 0)
					System.out.println("Enter Positive values Only");
				else if(num1 == num2)
					System.out.println("Start and end cannot be same");
			}
			catch(NumberFormatException o){

				System.out.println("Invalid format, only Integers allowed");
			}
		}while(num1 <= 0 || num2 <= 0 || num1 == num2);


		System.out.println("Series of Factorials of Numbers in the range is");
		for(int lc = num1; lc <= num2; lc++){

			//Reinitialisation of fact to 1, for each iteration
			fact = 1;
			//Nested Loop to calculate factorial for each iteration
			for(int ilc = 1; ilc <= lc; ilc++){
				fact *= ilc;
			}
			System.out.println("Factorial of "+lc+" : "+fact);
		}
	}
}

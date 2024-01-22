/* Problem Statement
 * 
 * Write a Program to that accepts two integers from user and calculates the Quotient & Reminder from their division
 * */

//Import IO package for input Operations
import java.io.*;

class Division {

	public static void main(String[] args)throws IOException {

		//Buffered Reader Object to create input stream for data input
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int num1 = 0, num2 = 0;
		do {
			//Try catch to handle run-r Exception for char input instead of integer
			try {

				//parseint method to convert string to integer
				System.out.println("Enter number 1");
				num1 = Integer.parseInt(br.readLine());
				System.out.println("Enter number 2");
				num2 = Integer.parseInt(br.readLine());

				if(num1 <= 0 || num2 <= 0){

					System.out.println("Enter Positive values Only");
				}

			}
			catch(NumberFormatException o){

				System.out.println("Invalid format, only Integers allowed");
			}

		}while(num1 <= 0 || num2 == 0);

		System.out.println("After Division Quotient = "+(num1/num2));
		System.out.println("After Division Remainder = "+(num1%num2));

	}
}

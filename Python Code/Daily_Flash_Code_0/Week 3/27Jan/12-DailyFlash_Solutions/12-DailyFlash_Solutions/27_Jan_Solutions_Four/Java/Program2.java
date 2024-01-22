/* Problem Statement
 * 
 * Write a Program that accepts Two integers from user and prints minimum number from them. 
 * */

//Import IO package for input Operations
import java.io.*;

class MinNum {

	public static void main(String[] args)throws IOException {

		//Buffered Reader Object to create input stream for data input
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int num1 = 0,num2 = 0;
		System.out.println("Enter two numbers to compare");
		do {
			//Try catch to handle run-time Exception for char input instead of integer
			try {
				//parseint method to convert string to integer
				num1 = Integer.parseInt(br.readLine());
				num2 = Integer.parseInt(br.readLine());
				if(num1 <= 0 || num2 <= 0)
					System.out.println("Enter Positive values Only");
				else if(num1 == num2)
					System.out.println("Both numbers cannot be same");
			}
			catch(NumberFormatException o){

				System.out.println("Invalid format, only Integers allowed");
			}
		}while(num1 <= 0 || num2 <= 0 || num1 == num2);

		//If num1 is Odd change it to next even
		if(num1 < num2)
			System.out.println("The Minimum number among "+num1+" and "+num2+" is "+num1);
		else
			System.out.println("The Minimum number among "+num1+" and "+num2+" is "+num2);
	}
}

/* Problem Statement
 * 
 * Write a Program which detects whether the entered number is perfect or not
 * 
 * A Perfect number is a number which is equal to the sum of its Perfect divisor
 * A perfect divisor of x is the number giving remainder 0 on dividing x by number, where number != x
 * */

//Import IO package for input Operations
import java.io.*;

class Perfect {

	public static void main(String[] args)throws IOException {

		//Buffered Reader Object to create input stream for data input
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int num1 = 0,sum = 0;
		System.out.println("Enter a number to check");
		do {
			//Try catch to handle run-time Exception for char input instead of integer
			try {
				//parseint method to convert string to integer
				num1 = Integer.parseInt(br.readLine());
				if(num1 <= 0 )
					System.out.println("Enter Positive values Only");
			}
			catch(NumberFormatException o){

				System.out.println("Invalid format, only Integers allowed");
			}
		}while(num1 <= 0 );

		for(int lc = 1; lc < num1; lc++)
			sum+=lc;

		if(sum == num1)
			System.out.println("Entered Number "+num1+" is a perfect number");
		else
			System.out.println("Entered Number "+num1+" is not a perfect number");
	}
}

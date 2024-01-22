/* Problem Statement
 * 
 * Write a Program to print series of Even numbers ranging between two numbers entered by user
 * */

//Import IO package for input Operations
import java.io.*;

class EvenSeries {

	public static void main(String[] args)throws IOException {

		//Buffered Reader Object to create input stream for data input
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int num1 = 0,num2 = 0;
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

		//If num1 is Odd change it to next even
		if(num1 %2 != 0)
			num1++;

		System.out.println("Series of even Numbers in the range is");
		for(int lc = num1; lc <= num2; lc+=2)
			System.out.print(lc+" ");
		System.out.println();
	}
}

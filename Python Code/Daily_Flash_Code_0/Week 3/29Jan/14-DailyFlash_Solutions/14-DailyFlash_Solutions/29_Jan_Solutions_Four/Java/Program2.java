/* Problem Statement
 * 
 * Write a Program that accepts an integer from user and prints its second successor and second predecessor.
 * */

//Import IO package for input Operations
import java.io.*;

class PrevNex {

	public static void main(String[] args)throws IOException {

		//Buffered Reader Object to create input stream for data input
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int num = 0;
		System.out.println("Enter a number");
		do {
			//Try catch to handle run-r Exception for char input instead of integer
			try {
				//parseint method to convert string to integer
				num = Integer.parseInt(br.readLine());
				if(num <= 0 )
					System.out.println("Enter Positive values Only");

			}
			catch(NumberFormatException o){

				System.out.println("Invalid format, only Integers allowed");
			}
		}while(num <= 0);

		System.out.println("The Second Predecessor is "+(num-2));
		System.out.println("The Second Sucessor is "+(num+2));

	}
}

/* Problem Statement
 * 
 * Write a Program to take input length and breadth of rectangle and calculate its area
 * */

//Import IO package for input Operations
import java.io.*;

class Area {

	public static void main(String[] args)throws IOException {

		//Buffered Reader Object to create input stream for data input
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int length = 0,breadth = 0;
		System.out.println("Enter Length and breadth in meters");
		do {
			//Try catch to handle run-r Exception for char input instead of integer
			try {
				//parseint method to convert string to integer
				length = Integer.parseInt(br.readLine());
				breadth = Integer.parseInt(br.readLine());
				if(length <= 0 || breadth <= 0)
					System.out.println("Enter Positive values Only");

			}
			catch(NumberFormatException o){

				System.out.println("Invalid format, only Integers allowed");
			}
		}while(length <= 0 || breadth <= 0 );

		//Area = length * breadth
		int area = length*breadth;
		System.out.println("The Area of rectangle = "+area+" m^2");

	}
}

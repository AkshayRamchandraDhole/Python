/* Problem Statement
 * 
 * Write a Program that calculates addition of two complex numbers
 * */

//Import IO package for input Operations
import java.io.*;

class Complex {

	public static void main(String[] args)throws IOException {

		//Buffered Reader Object to create input stream for data input
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int num1_r = 0, num2_r = 0;
		int num1_i = 0, num2_i = 0;
		//Try catch to handle run-r Exception for char input instead of integer
		try {

			//parseint method to convert string to integer
			System.out.println("Enter Real part for number 1");
			num1_r = Integer.parseInt(br.readLine());
			System.out.println("Enter Imaginary part for number 1");
			num1_i = Integer.parseInt(br.readLine());
			System.out.println("Enter Real part for number 2");
			num2_r = Integer.parseInt(br.readLine());
			System.out.println("Enter Imaginary part for number 2");
			num2_i = Integer.parseInt(br.readLine());


		}
		catch(NumberFormatException o){

			System.out.println("Invalid format, only Integers allowed");
		}

		if(num1_i < 0){

			num1_r = -num1_r;
			num1_i = -num1_i;
		}

		if(num2_i < 0){

			num2_r = -num2_r;
			num2_i = -num2_i;
		}

		System.out.println("Addition of "+num1_r+"+"+num1_i+"i and "+num2_r+"+"+num2_i+"i is "+(num1_r+num2_r)+"+"+(num1_i+num2_i)+"i");
	}
}






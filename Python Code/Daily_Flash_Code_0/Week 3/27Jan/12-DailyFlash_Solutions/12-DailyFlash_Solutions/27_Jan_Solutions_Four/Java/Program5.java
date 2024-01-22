/* Problem Statement
 * 
 * Write a Program that accepts Three integers from user and prints maximum number from them
 * */

//Import IO package for input Operations
import java.io.*;

class MaxNum {

	public static void main(String[] args)throws IOException {

		//Buffered Reader Object to create input stream for data input
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int num1 = 0, num2 = 0, num3 = 0;
		System.out.println("Enter three numbers to compare");
		do {
			//Try catch to handle run-time Exception for char input instead of integer
			try {
				//parseint method to convert string to integer
				num1 = Integer.parseInt(br.readLine());
				num2 = Integer.parseInt(br.readLine());
				num3 = Integer.parseInt(br.readLine());
				if(num1 <= 0 || num2 <= 0 || num3 <= 0)
					System.out.println("Enter Positive values Only");
				else if(num1 == num2 || num1 == num3 || num2 == num3)
					System.out.println("No 2 numbers can be same");
			}
			catch(NumberFormatException o){

				System.out.println("Invalid format, only Integers allowed");
			}
		}while(num1 <= 0 || num2 <= 0 || num3 <= 0 || num1 == num2 || num1 == num3 || num2 == num3);

		if(num1 > num2 && num1 > num3)
			System.out.println("The Maximum number among "+num1+", "+num2+" and "+num3+" is "+num1);
		else if(num2 > num3 && num2 > num1)
			System.out.println("The Maximum number among "+num1+", "+num2+" and "+num3+" is "+num2);
		else
			System.out.println("The Maximum number among "+num1+", "+num2+" and "+num3+" is "+num3);
	}
}

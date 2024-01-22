/*
Program 4: Write a Program to simulate simple calculator. Accept two integers
	   from user and sign of operation to perform.

Input:
	Enter First Number: 10
	Enter Second Number: 20
	Enter the sign of Operation: +

Output: Addition of 10 & 20 is 30.
*/

import java.io.*;

class Code4 {

	public static void main(String[] args) throws IOException{
	
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter First Number : ");
		int F_Num = Integer.parseInt(br.readLine());

		System.out.print("Enter Second Number : ");
		int S_Num = Integer.parseInt(br.readLine());

		System.out.print("Enter the sign of operator: ");
		char sign = (char)br.read();

		switch(sign) {
		
			case '+': System.out.println("Addition of "+F_Num+" & "+S_Num+" is "+(F_Num+S_Num));
				  break;

			case '-': System.out.println("Subtraction of "+F_Num+" & "+S_Num+" is "+(F_Num>S_Num?F_Num-S_Num:S_Num-F_Num));
                                  break;

			case '/': System.out.println("Division of "+F_Num+" & "+S_Num+" is "+(F_Num>S_Num?F_Num/S_Num:S_Num/F_Num));
                                  break;

			case '*': System.out.println("Multiplication of "+F_Num+" & "+S_Num+" is "+(F_Num*S_Num));
                                  break;

			default: System.out.println("Enter Valid Sign");
		}
	}
}

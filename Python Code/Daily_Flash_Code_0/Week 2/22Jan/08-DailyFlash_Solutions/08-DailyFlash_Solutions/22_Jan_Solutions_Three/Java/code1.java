/*
Program 1: Write a program that accepts two integers from user and prints
	   addition & Subtraction of them.
	{Note: checks for greater number to subtracts with while subtracting numbers}

Input: 10 20

Output:
	Addition is 20
	Subtraction is 10
*/

import java.io.*;

class Code1 {
	public static void main(String argv[]) throws IOException{
	
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Input1: ");
		int num1 = Integer.parseInt(br.readLine());

		System.out.print("Input2: ");
		int num2 = Integer.parseInt(br.readLine());

		int Sum = num1+num2;
		int Sub = num1>num2?num1-num2:num2-num1;

		System.out.println("Addition is "+Sum);
		System.out.println("Subtraction is "+Sub);
	}
}

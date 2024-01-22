/*
Program 2: Write a Program which accepts two integers from user and swaps
their insertion order.
Input : 20 30
Output :
Before Swap : 20 30
After Swap : 30 20
*/


import java.io.*;


class Swap{
	
	public static void main(String args[])throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter number1 : ");
		int num1 = Integer.parseInt(br.readLine());
		System.out.printf("Enter number2 : ");
		int num2 = Integer.parseInt(br.readLine());


		System.out.printf("Before Swap num1 = %d and num2 = %d\n",num1,num2);

		num1 = num1+num2;
		num2 = num1 - num2;
		num1 = num1 - num2;

		System.out.printf("After swap num1 = %d and num2 = %d",num1,num2);



	}	
}	

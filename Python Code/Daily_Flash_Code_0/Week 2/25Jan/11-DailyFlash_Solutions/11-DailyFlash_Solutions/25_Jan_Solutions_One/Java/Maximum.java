/*
 Program 5: Write a Program that accepts Two integers from user and prints
maximum number from them.
Input: 56 99
Output: The Maximum number amongst 56 & 99 is 99

*/


import java.io.*;


class Maximum{

	
	public static void main(String args[])throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.printf("Enter the number1 : ");
		int num1 = Integer.parseInt(br.readLine());
		System.out.printf("Enter the number2 : ");
		int num2 = Integer.parseInt(br.readLine());
	
		System.out.printf("The Maximum number amongst %d and %d is %d",num1,num2,num1>num2?num1:num2);



	}	
}	

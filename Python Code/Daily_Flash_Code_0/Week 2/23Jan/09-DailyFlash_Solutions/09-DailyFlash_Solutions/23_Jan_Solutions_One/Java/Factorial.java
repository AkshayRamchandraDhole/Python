/*Program 5: Write a C program to calculate the factorial of a given number.
Input: 5
Output:
The Factorial of 5 is: 120*/

class Factorial{
	

	public static void main(String args[]){
		
		int num = 5;
		int fact = 1;
		for(int i = 2 ; i<=5 ; i++){
			fact =fact*i;
		}	

		System.out.printf("The factorial of 5 is : %d",fact);
	}	
}	

/*
Program 2 : Write a Program to print Sum of First 10 Natural Numbers.
Output: The s um of First 10 Natural Numbers : 55

*/

class SumOfNaturalNumber{
	
	public static void main(String args[]){
		
		System.out.printf("Sum of first 10 natural number\n");
		int sum = 0;
		for(int itr = 1 ; itr <= 10 ; itr++){

			sum = sum + itr ;
		}

		System.out.printf("%d",sum);
	}	

}	

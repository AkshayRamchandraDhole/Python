/*
Program 3 : Write a Program to print First 50 Odd Numbers .
Output: 1 3 5 . . . 99

*/

class OddNumber{
	
	public static void main(String args[]){
		
			System.out.println("First 50 odd numbers");
			for(int itr = 0 ; itr <= 100; itr++){

				if(itr%2!=0)
					System.out.printf("%d  ",itr);

			}
	}	
}	

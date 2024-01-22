/*
Program 4 : Write a Program to print First 50 Even Numbers
Output: 2 4 6 . . . 100
*/

class EvenNumbers{

	public static void main(String args[]){

		System.out.println("First 50 even numbers");

		for(int itr = 0 ; itr <= 100 ; itr++ ){
		
			if(itr%2==0)
				System.out.printf("%d ",itr);
		}

	}	
}	

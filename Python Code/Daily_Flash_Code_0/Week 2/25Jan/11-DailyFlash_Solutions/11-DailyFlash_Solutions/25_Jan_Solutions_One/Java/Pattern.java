/*
Program 4: Write a Program to Print following Pattern.
a
A A 
a a a 
A A A A
a a a a a
*/


class Pattern{

	
	public static void main(String args[]){

		
		for(int outerItr = 0 ; outerItr < 5 ; outerItr++){

			for(int innerItr = 0 ; innerItr <= outerItr ; innerItr++){

				System.out.print(outerItr%2==0?"a ":"A ");
			}
			System.out.printf("\n");


		}	
	}	
}	

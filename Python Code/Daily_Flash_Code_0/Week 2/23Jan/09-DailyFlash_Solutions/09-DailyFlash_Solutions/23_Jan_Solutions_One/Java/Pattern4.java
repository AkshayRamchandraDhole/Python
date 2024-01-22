/*Program 4: Write a Program to Print following Pattern
*
* *
* * * 
* * * * 

*/

class Patter4{
	
	public static void main(String args[]){

		for(int outer = 1 ; outer <=4; outer++ ){

			for(int inner = 1 ; inner <=outer; inner++){
			
				System.out.printf("* ");
			}		
			System.out.printf("\n");
		}
	}	

}	

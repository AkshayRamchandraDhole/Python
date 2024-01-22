/*
Program 1: Write a Program to Print following Pattern
1
2 2 
3 3 3
4 4 4 4
*/

class Patter1{
	
	public static void main(String args[]){

		for(int outer = 1 ; outer <=4; outer++ ){

			for(int inner = 1 ; inner <=outer; inner++){
			
				System.out.printf("%d",outer);
			}		
			System.out.printf("\n");
		}
	}	

}	

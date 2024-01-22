/*
Program 5 : Write a Program to print following Pattern.
Output :
0 0 0 0
0 0 0 0
0 0 0 0
0 0 0 0
*/

class Pattern{
	
	public static void main(String args[]){
		
		for(int outeritr = 1 ; outeritr <= 4 ; outeritr++ ){

			for(int inneritr = 1 ; inneritr <= 4 ; inneritr++ ){

				System.out.printf("0 ");
			}
			System.out.printf("\n");
		}
	}	
}	

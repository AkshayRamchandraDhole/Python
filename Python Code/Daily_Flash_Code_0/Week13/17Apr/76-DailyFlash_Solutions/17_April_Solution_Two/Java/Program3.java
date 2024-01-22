import java.util.*;

class Pattern{


	public static void main(String ... args){

		int row = 0;
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter number of Rows");
		row = sc.nextInt();

		for(int olc = 0; olc < row; olc++){
	
		for(int ilc=0; ilc < row; ilc++){
		
			if(olc == ilc || olc+ilc == row-1){
				System.out.printf("X\t");
			}
			else
				System.out.printf("\t");
		}
		System.out.printf("\n");
	}
	}
}

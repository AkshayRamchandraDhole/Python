import java.util.*;

class Pattern{


	public static void main(String ... args){

		int row = 0;
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter number of Rows");
		row = sc.nextInt();

		int m = row/2;

		for(int olc = 0; olc < row; olc++){

		for(int ilc = 0; ilc < row; ilc++){

			if((olc+ilc < m && olc < m) || (olc-ilc > m) || (ilc-olc > m && olc < m) || olc+ilc >= row+m){

				System.out.printf("\t");
			}else if(olc <= m){

				System.out.printf("%d\t",olc+1);
			}
			else{

				System.out.printf("%d\t",(2*m)-olc+1);
			}
		}
		System.out.printf("\n");
	}	

	}
}

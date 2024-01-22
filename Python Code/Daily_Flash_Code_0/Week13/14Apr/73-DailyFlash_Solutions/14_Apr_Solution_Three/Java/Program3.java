import java.util.*;

class Pattern{


	public static void main(String ... args){

		int row = 0;
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter number of Rows");
		row = sc.nextInt();

		int m = row/2;

		char ch = 64;

	for(int olc = 0; olc < row; olc++){


		for(int ilc = 0; ilc < row; ilc++){

			if((olc+ilc < m && olc < m) || (olc-ilc > m) || (ilc-olc > m && olc < m) || olc+ilc >= row+m){

				System.out.printf("\t");
			}else if(olc <= m){

				if(olc%2 != 0){

					System.out.printf("%c\t",ch+olc);
				}
				else {
					System.out.printf("%d\t",olc+1);
				}
			}
			else{

				if(olc%2 != 0){

					System.out.printf("%c\t",ch+((2*m)-olc+2));
				}
				else {
					System.out.printf("%d\t",(2*m)-olc+1);
				}
			}
		}
		System.out.printf("\n");
		if(olc <= m && olc%2 != 0)
			ch--;
		else if(olc > m && olc%2 != 0)
			ch++;

	}	
	}
}

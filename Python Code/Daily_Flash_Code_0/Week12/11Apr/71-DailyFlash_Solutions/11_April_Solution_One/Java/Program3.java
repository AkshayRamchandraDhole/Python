import java.util.*;

class Pattern{


	public static void main(String ... args){

		int row = 0;
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter number of Rows");
		row = sc.nextInt();


		for(int olc=0;olc<row;olc++){

			for(int ilc = 0;ilc<(row*2-1)-olc;ilc++){

				if(ilc>=olc){
					if(ilc < row)
						System.out.printf("%d\t",(row*2-ilc));
					else
						System.out.printf("%d\t",((row*2)-((row*2)-ilc)+2));
				}else{

					System.out.printf("\t");
				}
			}
			System.out.println();
		}	

	}
}

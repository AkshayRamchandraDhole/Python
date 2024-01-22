import java.util.*;

class Pattern{


	public static void main(String ... nk){
	
		int rows = 0;
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter number of Columns");
		rows = sc.nextInt();
		
	
		for(int i=0; i<rows; i++){	
		for(int j=0; j<(rows) + i; j++){


			
			if(i+j<rows-1){
			
				System.out.printf(" \t");
			}
			else
				System.out.printf("%d\t",j+1);
			
		}
		System.out.printf("\n");
	}
}

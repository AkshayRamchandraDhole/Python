import java.util.*;

class Pattern{


	public static void main(String ... nk){
	
		int row,col,len;
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter number of Columns");
		col = sc.nextInt();
		row=2*col-1;
		sc.skip("\n");

		System.out.println("Enter A String");
		String str = sc.nextLine();
	
		for(int i=0; i<row; i++){
			for(int j=0; j<col; j++){
					if(i+j>=row/2 && i-j<=row/2){
							
						System.out.printf("%c\t",str.charAt(j));							
					}
					else
						System.out.print("\t");
			}
			System.out.println();
		}
	}
}

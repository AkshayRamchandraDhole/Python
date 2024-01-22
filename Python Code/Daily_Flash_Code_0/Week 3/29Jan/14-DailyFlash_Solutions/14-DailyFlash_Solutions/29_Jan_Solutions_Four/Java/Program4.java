/* Problem Statement
 * Write a Program to Print following Pattern.
 * 3
 * 2	3
 * 1	2	3
 * 0	1	2	3
 * */

//Import IO package for input Operations
import java.io.*;

class Pattern1 {

	public static void main(String[] args)throws IOException {

		//Buffered Reader Object to create input stream for data input
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int rows = 0;
		System.out.println("Enter numbers of rows");
		do {
			//Try catch to handle run-time Exception for char input instead of integer
			try {
				//parseint method to convert string to integer
				rows = Integer.parseInt(br.readLine());
				if(rows <= 0)
					System.out.println("Enter Positive values Only");
			}
			catch(NumberFormatException o){

				System.out.println("Invalid format, only Integers allowed");
			}
		}while(rows <= 0);

		for(int olc = (rows-1); olc >= 0; olc--){
			for(int ilc = olc; ilc < rows; ilc++){
				System.out.print(ilc+"\t");
			}
			System.out.println();
		}
	}
}

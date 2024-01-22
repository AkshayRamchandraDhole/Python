/* Problem Statement
 * Write a Program to Print following Pattern.
 * 1
 * 8	27
 * 64	125	216
 * 343	512	729	1000
 * */

//Import IO package for input Operations
import java.io.*;

class Pattern1 {

	public static void main(String[] args)throws IOException {

		//Buffered Reader Object to create input stream for data input
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int rows = 0,num = 1;
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

		for(int olc = 1; olc <= rows; olc++){
			for(int ilc = 1; ilc <= olc; ilc++){
				System.out.print((num*num*num)+"\t");
				num++;
			}
			System.out.println();
		}
	}
}

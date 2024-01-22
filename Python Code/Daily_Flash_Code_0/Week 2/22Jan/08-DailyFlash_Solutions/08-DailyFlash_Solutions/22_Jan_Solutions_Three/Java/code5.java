/*

   Program 5: Write a Program to print following Pattern.

   Output:
		*
		* * 
		* * * 
		* * * * 
*/

import java.io.*;

class Code5 {

	public static void main(String[] args) throws IOException {
	
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter Row: ");
		int row = Integer.parseInt(br.readLine());

		for(int olc = 0;olc < row;olc++) {
		
			for(int ilc = 0;ilc <= olc;ilc++) {
			
				System.out.print(" * ");
			}
			System.out.println();
		}
	}
}

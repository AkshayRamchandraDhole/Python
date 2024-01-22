

import java.io.*;

class Program {

	public static void main(String[] args) throws IOException {

		int c1 = 64, c2 = 64;
		System.out.printf("Enter Alphabets : \n");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		do {	
			c2 = c1;
			c1 = Integer.parseInt(br.readLine());
			
		}while(1 == c1-c2 && c1 <= 90);
		System.out.printf("You Entered Wrong Alphabet\n");
	}
}
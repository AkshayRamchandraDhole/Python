

import java.io.*;

class Program {

	public static void main(String[] args) throws IOException {

		int n;
		System.out.printf("Enter Number : \n");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		do {
			n = Integer.parseInt(br.readLine());
			if(n < 0)
				break;
			System.out.printf("cube of %d : %d\n", n, n*n*n);
			
		}while(true);
		System.out.printf("You entered a negative number\n");
	}
}
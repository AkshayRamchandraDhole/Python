

import java.io.*;

class Program {

	public static void main(String[] args) throws IOException {

		int n, fact;
		System.out.printf("Enter Number : \n");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		do {
			n = Integer.parseInt(br.readLine());
			fact = 1;
			if(n < 0)
				break;
			for(int i = 1; i<= n; i++)
				fact *= i;
			System.out.printf("Factorial of %d : %d\n", n, fact);
			
		}while(true);
		System.out.printf("You entered a negative number\n");
	}
}

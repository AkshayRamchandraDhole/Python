

import java.io.*;

class Program {

	public static void main(String[] args) throws IOException {

		int n;
		System.out.printf("Enter Number : \n");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		if(n*n % 10 == n){
			System.out.printf("Number is Automorphic Number\n");
		}
		else{
			System.out.printf("Number is not Automorphic Number\n");
		}
	}
}


import java.io.*;

class Program {

	public static void main(String[] args) throws IOException {

		int n;
		System.out.printf("Enter Number : \n");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		for(int i = 1; i <= n; i++){
			if(i*i % 10 == i){
				System.out.print(i + " ");
			}
		}
		System.out.println();
	}
}

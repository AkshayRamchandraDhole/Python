

import java.io.*;

class Program {

	public static void main(String[] args) throws IOException {

		int n;
		System.out.printf("Enter Number : \n");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		for(int i = 1; i<= n; i++){
			for(int j = 1; j <= n*2-1; j++){
				if(j > n-i && j < n+i)
					System.out.printf("%c\t", (64+j-(n-i)));
				else
					System.out.printf("\t");
			}
			System.out.printf("\n");
		}
	}
}
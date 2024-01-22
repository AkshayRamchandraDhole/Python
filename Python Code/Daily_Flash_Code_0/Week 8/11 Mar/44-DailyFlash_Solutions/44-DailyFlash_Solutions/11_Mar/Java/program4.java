

import java.io.*;

class Program {

	public static void main(String[] args) throws IOException {

		int n, a = 0, b = 1, c;
		c = a + b;
		System.out.printf("Enter Number : \n");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		for(int i = 1; i<= n; i++){
			for(int j = 1; j <= n*2-1; j++){
				if(j > n-i && j < n+i){
					System.out.printf("%d\t", a);
					a = b;
					b = c;
					c = a + b;
				}
				else
					System.out.printf("\t");
			}
			System.out.printf("\n");
		}
	}
}

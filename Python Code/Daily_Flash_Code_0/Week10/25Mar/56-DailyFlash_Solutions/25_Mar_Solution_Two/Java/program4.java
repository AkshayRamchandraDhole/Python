import java.io.*;
class Program {
	public static void main(String[] args) throws IOException{
		
		int n, k = 1;
		System.out.printf("Enter Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());

		for(int i = 1; i <= n*2 - 1; i++){
			for(int j = 1; j <= n; j++){
				if(i <= n && j <= i){
					System.out.print(k++ + "\t");
				}
				else if(i > n && j > i - n) {
					System.out.print(--k + "\t");
				}
			}
			if(i == n)
				k--;
			System.out.printf("\n");
		}
	}
}

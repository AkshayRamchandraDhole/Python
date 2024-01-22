import java.io.*;
class Program {

	public static void main(String[] args) throws IOException{
		int n, k = 0;
		System.out.printf("Enter Limit : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		for(int i = 1; i <= n*2-1; i++){
			for(int j = 1; j <= n; j++){
				if(j <= i && i<=n){
					System.out.printf("%c\t", (64+i));
				}
				else if(i > n && j > (i-n)){
					System.out.printf("%c\t", (64+n-(i-n)));
				}
			}
			System.out.printf("\n");
		}
	}
}

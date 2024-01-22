import java.io.*;

class Program {
	public static void main(String[] args) throws IOException{
		int n;
		char c = 64;
		System.out.printf("Enter Limit : ");
		InputStreamReader inp = new InputStreamReader(System.in);
		BufferedReader br =  new BufferedReader(inp);
		n = Integer.parseInt(br.readLine());

		for(int i = 1; i <= 2*n-1; i++){
			for(int j = n*2-1; j >= 1; j--){
				if(j > (n-i) && j < (n+i) && i <= n){
					System.out.printf("%c\t", (i%2 == 1)?i+48:c);
				}
				else if(i>n && j > (i-n) && j < (2*n-(i-n))){
					System.out.printf("%c\t", (i%2==1)?(n-(i-n) + 48):c);
				}
				else {
					System.out.printf("\t");
				}	
				
			}
			if(i<=n && i % 2 == 1)
				c++;
			else if(i>n)
				c--;
			System.out.printf("\n");
		}
	}
}
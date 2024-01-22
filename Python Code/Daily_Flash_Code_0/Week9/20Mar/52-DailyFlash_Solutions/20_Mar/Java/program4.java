import  java.io.*;

class Program {
	public static void main(String ... kanif) throws IOException { 
		int n, k = 1, inc = 0;
		char ch  = 'A';
		System.out.printf("Enter Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());

		for(int i = n; i >= 1; i--){
			k = inc;
			for(int j = 1; j < n+i; j++){
				if(j > n - i){
					System.out.printf("%c%d\t",ch,k);
					k++;
					ch++;
				}
				else
					System.out.printf("\t");
			}
			inc += 2;
			System.out.printf("\n");
		}
	}	
}

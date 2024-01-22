import  java.io.*;

class Program {
	public static void main(String ... kanif) throws IOException { 
		int n, k = 1;
		System.out.printf("Enter Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());

		for(int i = n; i >= 1; i--){
			for(int j = 1; j < n+i; j++){
				if(j > n - i && (n-i+1) % 2 == 1){
					System.out.printf("%d\t",k);
					k++;
				}
				else if(j > n - i && (n-i+1) % 2 == 0){
					System.out.printf("%d\t",k);
					k--;
				}
				else
					System.out.printf("\t");
			}
			if((n-i + 1)%2 == 1) k--;
			else k++;
			System.out.printf("\n");
		}
	}	
}
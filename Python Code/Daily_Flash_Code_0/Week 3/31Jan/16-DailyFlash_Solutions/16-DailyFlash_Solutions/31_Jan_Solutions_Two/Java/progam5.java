import java.io.*;

class Template {
	public static void main(String[] args) throws IOException {
		
		int n = 0, sum = 0;
		System.out.printf("Enter Limit : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		try {
			n = Integer.parseInt(br.readLine());
		}catch(NumberFormatException nf){
			System.exit(0);
		}

		if(n <= 0)
			System.exit(0);

		for(int i = 1; i <= n; i++){
			sum = 0;
			for(int j = 1; j <= i/2; j++){
				
				if(i % j == 0){
					sum = sum + j;
				}
			}
			if(sum == i)
				System.out.printf("%d ", i);
		}
		System.out.printf("\n");
	}
}
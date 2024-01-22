import java.io.*;

class Template {
	public static void main(String[] args) throws IOException {
		
		int n = 0, k;
		System.out.printf("Enter Size : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		try {
			n = Integer.parseInt(br.readLine());
		}catch(NumberFormatException nf){
			System.exit(0);
		}

		if(n <= 0)
			System.exit(0);

		k = n * 2 - 1;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= i; j++){
				System.out.printf("%d\t", k--);
			}
			k = n * 2 - 1 - i;
			System.out.printf("\n");
		}
	}
}
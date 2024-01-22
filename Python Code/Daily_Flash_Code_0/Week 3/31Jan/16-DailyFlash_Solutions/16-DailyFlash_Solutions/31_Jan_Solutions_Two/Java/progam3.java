import java.io.*;

class Template {
	public static void main(String[] args) throws IOException {
		
		int n = 0;
		System.out.printf("Enter Size : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		try {
			n = Integer.parseInt(br.readLine());
		}catch(NumberFormatException nf){
			System.exit(0);
		}
		if (n < 0)
			System.exit(0);

		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n-i+1; j++){
				System.out.printf("%c\t", 64 + i);
			}
			System.out.printf("\n");
		}
	}
}
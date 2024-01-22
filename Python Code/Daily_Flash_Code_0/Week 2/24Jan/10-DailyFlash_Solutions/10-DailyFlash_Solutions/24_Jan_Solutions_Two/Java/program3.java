
import java.io.*;

class Process0 {
	
	public static void main(String[] args) throws IOException{
		
		int n = 0;
		System.out.printf("Enter Positive Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		try{
			n = Integer.parseInt(br.readLine());
		}
		catch (NumberFormatException e) {
			System.out.printf("Invalid\n");
		}
		if(n < 0){
			System.out.printf("Enter Positive Number\n");
			System.exit(0);
		}
		for(int i = 1; i <= n; i++) {
			if(i % 2 != 0 )
				System.out.printf("Cube of %d : %d and Square of %d : %d\n", i, i*i*i, i, i*i);
		}
	}
}

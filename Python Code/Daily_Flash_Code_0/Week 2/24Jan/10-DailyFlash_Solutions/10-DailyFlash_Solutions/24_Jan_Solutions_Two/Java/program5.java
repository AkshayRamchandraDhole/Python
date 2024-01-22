
import java.io.*;

class Process0 {
	
	public static void main(String[] args) throws IOException{
		
		int n = 0,flag = 0;
		System.out.printf("Enter Size : ");
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
		
		System.out.printf("perfect Divisors of %d are : \n", n);
		for(int i = 2; i <= n/2; i++) {
			if(n % i == 0 ) { 
				flag = 1;
				System.out.printf("%d ", i);
			}
		}
		if(flag == 0)
			System.out.printf("Prime Number");
		System.out.printf("\n");
	}
}

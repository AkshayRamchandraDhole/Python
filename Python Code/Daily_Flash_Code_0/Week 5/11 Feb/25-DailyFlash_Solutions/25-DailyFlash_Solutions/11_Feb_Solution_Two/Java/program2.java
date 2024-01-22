
import java.io.*;
class Program {

	public static void main(String[] args) throws IOException{
	
		int n, sum = 0, c = 0;
		System.out.printf("Enter Octal Number: ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		while(n!=0){
			if(n%10>=8){
				System.out.printf("Not a Octal Number\n");
				System.exit(0);
			}
			sum = sum + ((int)Math.pow(8,c) * (n%10));
			c++;
			n = n/10;
		}	
		System.out.printf("Decimal Number : %d\n", sum);
	}
	
}
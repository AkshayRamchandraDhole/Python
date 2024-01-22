
import java.io.*;

class Program {
	public static void main (String ... kbd) throws IOException{
		int n, sum = 0;
		System.out.printf("Enter Number: ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		while(n!=0){
			sum = sum + n % 10;
			n = n / 10;
		}
		System.out.printf("Sum : %d\n", sum);
	}
}
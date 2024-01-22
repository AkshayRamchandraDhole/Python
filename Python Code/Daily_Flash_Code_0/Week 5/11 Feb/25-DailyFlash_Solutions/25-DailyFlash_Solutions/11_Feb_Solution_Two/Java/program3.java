
import java.io.*;
class Program {

	public static void main(String[] args) throws IOException{
	
		int n, sum = 0;
		System.out.printf("Enter Number: ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		for(int i = (n%2==0)?n:n-1; i >= 0; i-=2){
			System.out.printf("%d ", i);
		}
		System.out.printf("\n");
	}
}

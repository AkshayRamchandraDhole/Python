
import java.io.*;

class Program {

	public static void main(String[] args) throws IOException {
		int n,mul;
		System.out.printf("Enter Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		
		mul = 1;
		for(int i = 1; i<= n; i++){
			mul = mul*(i+i);
		}
		System.out.printf("%d\n",mul);
	}
}

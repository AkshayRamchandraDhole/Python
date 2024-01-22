
import java.io.*;

class Program {

	public static void main(String[] args) throws IOException {
		int n,temp,rev;

		System.out.printf("Enter Numbers : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		do {
			n = Integer.parseInt(br.readLine());
			rev = 0;
			temp = n;
			while(n != 0){
				rev = rev + (n % 10)*(n%10)*(n%10);
				n /= 10;
			}
			if(temp != rev)
				System.out.printf("%d\n", temp);
			else
				break;
		}while(true);
	}
}
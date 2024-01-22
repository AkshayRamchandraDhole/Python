
import java.io.*;
class Program {
	public static void main(String[] args) throws IOException{
	
		int n;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		while(true){	

			n = Integer.parseInt(br.readLine());

			if(n < 0)
				System.exit(0);
			System.out.printf("%d\n", n);
		}
	}
}

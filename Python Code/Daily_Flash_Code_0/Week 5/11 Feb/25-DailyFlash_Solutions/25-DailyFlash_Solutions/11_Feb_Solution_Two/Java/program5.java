
import java.io.*;
class Program {

	public static void main(String[] args) throws IOException{
	
		int n, cnt = 0;
		System.out.printf("Enter Number: ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());

		if(n<0)
			return;
		while(n != 0){
			if((n%10)%2 == 0)
				cnt++;
			n = n / 10;
		}	
		System.out.printf("Count : %d\n", cnt);
	}
}
	
import java.io.*;
class Program {
	public static void main(String[] args) throws IOException{

		int n,i,cnt = 0, c=0;
		System.out.printf("Enter Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		if(n<0)
			return;
		while(n != 0){
			n = n / 10;
			cnt++;
		}	
		System.out.printf("Count : %d\n", cnt);	
	}
}
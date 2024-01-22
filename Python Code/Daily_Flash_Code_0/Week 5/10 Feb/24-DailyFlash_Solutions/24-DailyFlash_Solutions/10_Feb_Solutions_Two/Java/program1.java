
import java.io.*;

class Program {
	public static void main(String[] args) throws IOException{
	
		int n, sum = 0;
		System.out.printf("Enter Number: ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		for(int j = 1; j <= n; j++){
			sum = 0;
			for(int i = 1; i <= j/2; i++){
				if(j % i == 0){
					sum = sum + i;
				}
		}
			if(sum > j){
				System.out.printf("%d ",j);
			}
		}
	}
}

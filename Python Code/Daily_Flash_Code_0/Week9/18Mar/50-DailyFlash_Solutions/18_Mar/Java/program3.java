
import java.io.*;

class Program {

	public static void main(String[] args) throws IOException {
		
		int n,fact = 1,sum,temp;

		System.out.printf("Enter Numbers : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
			
		do {
			n = Integer.parseInt(br.readLine());
			fact = 1;
			temp = n;
			sum = 0;
			while(n != 0){
				fact = 1 ;
				for(int i = 1; i <= n%10 ;i++){
					fact = fact * i;
				}
				if(n%10 == 0)
					fact = 1;
				sum = sum + fact;
				n = n / 10;
			}
			if(temp != sum)
				System.out.printf("%d\n", temp);
			else
				break;
		}while(true);
	}
}
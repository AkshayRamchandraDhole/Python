
import java.io.*;

class OS {
	public static void main (String ... kbd) throws IOException {

		OS o = new OS();
		int n = 0;
		System.out.printf("Enter Number : \n");
		BufferedReader br = new BufferedReader(new InputStreamReader (System.in));

		try{
			n = Integer.parseInt(br.readLine());
		}
		catch(NumberFormatException e){
			System.out.printf("Invalid Number");
			System.exit(0);
		}
		if(n < 0)
			System.exit(0);
		int k = 1;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= i; j++){
				System.out.printf("%d  ", k);
				k++;
			}
			System.out.printf("\n");
		}
		return ;
	}
}
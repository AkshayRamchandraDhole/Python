
import java.io.*;

class Thread {
	public static void main (String ... kbd) throws IOException{

		int n = 0;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter Size : \n");
		try{
			n = Integer.parseInt(br.readLine());
			if(n < 0)
				throw new NumberFormatException();
		}
		catch(NumberFormatException n){
			System.out.printf("Invalid\n");
			System.exit(0);
		}

		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= i; j++){
				System.out.printf("*  ");
			}
			System.out.printf("\n");
		}
		return ;
	}
}

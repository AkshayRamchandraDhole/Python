
import java.io.*;

class Map {

	public static void main(String[] args) throws IOException{
			
		int n1 = 0, n2 = 0;
		System.out.printf("Enter Positive Numbers : \n");
		BufferedReader br = new BufferedReader(new InputStreamReader (System.in));

		try {
			n1 = Integer.parseInt(br.readLine());
			n2 = Integer.parseInt(br.readLine());
		}
		catch(NumberFormatException n){
			System.exit(0);
		}

		if(n1 < 0 || n2 < 0 || n1 > n2){
			System.out.printf("Enter Positive Numbers or second Number should greater than first Number\n");
			System.exit(0);
		}
		for(int i = n1; i <= n2; i++) {
			if(i % 2 == 0 )
				System.out.printf("%d ", i);
		}
		System.out.printf("\n");
	}
}

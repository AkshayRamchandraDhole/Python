
import java.io.*;

class Map {

	public static void main(String[] args) throws IOException{
			
		int n2 = 0;
		System.out.printf("Enter Positive Number : \n");
		BufferedReader br = new BufferedReader(new InputStreamReader (System.in));

		try {
			n2 = Integer.parseInt(br.readLine());	
		}
		catch(NumberFormatException n){
			System.exit(0);
		}
		if(n2 < 0){
			System.out.printf("Enter Positive Number\n");
			System.exit(0);
		}
		for(int i = 1; i <= n2; i++) {
			if(i % 2 == 0 )
				System.out.printf("Cube of %d : %d and Square of %d : %d\n", i, i*i*i, i, i*i);
		}
	}
}

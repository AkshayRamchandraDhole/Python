
import java.io.*;

class Map {

	public static void main(String[] args) throws IOException{
			
		int a = 0, b = 0;
		System.out.printf("Enter Positive Numbers : \n");
		BufferedReader br = new BufferedReader(new InputStreamReader (System.in));

		try {
			a = Integer.parseInt(br.readLine());
			b = Integer.parseInt(br.readLine());
		}
		catch(NumberFormatException n){
			System.exit(0);
		}
		System.out.printf("Before Swap :\n");
		System.out.printf("a : %d\n", a);
		System.out.printf("b : %d\n", b);
		
		b = a + b - (a = b);
		
		System.out.printf("After Swap :\n");
		System.out.printf("a : %d\n", a);
		System.out.printf("b : %d\n", b);
	}
}
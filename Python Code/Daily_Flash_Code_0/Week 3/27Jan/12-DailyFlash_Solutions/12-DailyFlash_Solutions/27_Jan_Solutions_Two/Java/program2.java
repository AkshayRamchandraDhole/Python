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

		System.out.printf("Minimum amongst %d and %d : %d\n", a,b,(a>=b)?b:a);
	}
}

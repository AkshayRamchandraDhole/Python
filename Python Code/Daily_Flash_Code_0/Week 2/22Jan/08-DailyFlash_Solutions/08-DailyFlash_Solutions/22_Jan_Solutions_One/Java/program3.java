import java.io.*;

class Thread {
	public static void main (String ... kbd) throws IOException{

		int a = 0, b = 0;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter Numbers: \n");
		try{
			a = Integer.parseInt(br.readLine());
			b = Integer.parseInt(br.readLine());
		}
		catch(NumberFormatException ne){
			System.out.printf("Invalid\n");
			System.exit(0);
		}
	
		System.out.printf("Addition : %d\nSubtraction : %d\n", a * a * a + b * b * b , a * a - b * b);
	}
}

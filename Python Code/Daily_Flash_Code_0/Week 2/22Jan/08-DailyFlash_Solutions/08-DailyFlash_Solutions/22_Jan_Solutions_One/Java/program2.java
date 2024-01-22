import java.io.*;

class Thread {
	public static void main (String ... kbd) throws IOException{

		float a = 0, b = 0;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter Numbers: \n");
		try{
			a = Float.parseFloat(br.readLine());
			b = Float.parseFloat(br.readLine());
		}
		catch(NumberFormatException ne){
			System.out.printf("Invalid\n");
			System.exit(0);
		}
		float k = a * b;
		
		if ((b==0 && b <= a) || (a == 0 && a <= b)){
			System.out.printf("Denominator can't be Zeror\n");
			System.exit(0);
		}
		else{
			System.out.printf("Multiplication : %f\nDivision : %f\n", k, (a/b) > (b/a)? a/b : b/a);
		}
	}
}

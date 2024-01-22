
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
		System.out.printf("Factorial of %d is %d\n", n, o.factorial(n));
		return ;
	}

	int factorial(int n) {
		
		if(n == 0)
			return 1;
		return n * factorial(n-1);
	}
}
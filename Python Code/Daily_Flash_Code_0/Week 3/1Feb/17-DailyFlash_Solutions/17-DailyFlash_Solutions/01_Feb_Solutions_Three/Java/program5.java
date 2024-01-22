import java.io.*;

class Home {
	public static void main(String[] args) throws IOException{
		
		int n1 = 1, n2 = 0;
		System.out.printf("Enter Numbers : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		try{
			n1 = Integer.parseInt(br.readLine());
			n2 = Integer.parseInt(br.readLine());
		}
		catch(NumberFormatException ne){
			return;
		}
		if(n1 < 0 || n2 < 0)
			return;
		System.out.printf("The GCD of %d and %d is %d\n", n1, n2, new Home().gcd(n1, n2));
	}

	int gcd(int n1, int n2){
		
		if(n2 != 0)
			return gcd(n2, n1 % n2);
		else
			return n1;

	}
}

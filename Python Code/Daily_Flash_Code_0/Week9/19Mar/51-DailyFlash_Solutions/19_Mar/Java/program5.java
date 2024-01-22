import  java.io.*;

class Program {
	public static void main(String ... kanif) throws IOException { 

		int n,t;
		float sum = 0;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Total Number : ");
		t = Integer.parseInt(br.readLine());
		System.out.printf("Enter Numbers : ");
		for(int i = 1; i <= t; i++) {
			n = Integer.parseInt(br.readLine());
			sum = sum + n;
		}
		System.out.printf("Average = %f\n", sum /t);
	}
}
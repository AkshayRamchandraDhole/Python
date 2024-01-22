import java.io.*;

class Program1 {


	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.printf("Enter A String\n");

		StringBuilder s = new StringBuilder(br.readLine());
		StringBuilder r = s.reverse();
		
		System.out.println("Output String "+r);
		
	}
}

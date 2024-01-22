import java.io.*;

class Program1 {


	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.printf("Enter A String\n");

		String str = br.readLine();
		StringBuilder s = new StringBuilder(str);

		System.out.println(s.reverse());
		
	}
}

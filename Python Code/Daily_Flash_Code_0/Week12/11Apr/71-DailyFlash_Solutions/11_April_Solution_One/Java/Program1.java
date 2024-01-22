import java.io.*;

class Program1 {


	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.printf("Enter A String\n");

		String s = br.readLine();
		System.out.println("Enter Start and End Index to Copy");
		int start = Integer.parseInt(br.readLine());
		int end = Integer.parseInt(br.readLine());
		String r = s.substring(start,end+1);
		
		System.out.println("Output String "+r);
		
	}
}

import java.io.*;

class Program1 {


	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.printf("Enter A String\n");

		String s = br.readLine();
		StringBuilder str = new StringBuilder(s);
		
		String r = new String(str.reverse());	
		if(r.equals(s)){

			System.out.println("Pallindrome");
		}
		
	}
}

import java.io.*;

class Program1 {


	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.printf("Enter A String\n");

		String s = new String(br.readLine());
		System.out.println("Enter Index to remove Character");
		int rm = Integer.parseInt(br.readLine());
		
		String n = s.substring(0,rm-1);
	
		n = n.concat(s.substring(rm,s.length()));
	
		System.out.println("Output String "+n);
		
	}
}

import java.io.*;

class Program1 {


	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.printf("Enter A String 1\n");
		String str1 = new String(br.readLine());

		System.out.printf("Enter A String 2\n");
		String str2 = new String(br.readLine());

		str2 = str1.concat(str2);

		System.out.println("New String "+str2);
	}
}

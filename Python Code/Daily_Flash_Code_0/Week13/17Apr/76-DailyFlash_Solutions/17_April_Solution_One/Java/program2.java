import java.io.*;

class Program {
	public static void main (String ... kbd) throws IOException {
		BufferedReader  br = new BufferedReader(new InputStreamReader(System.in));
		System.out.print("Enter String 1: ");
		String str = br.readLine();
		System.out.print("Enter String 2: ");
		String substr = br.readLine();
		str = str.concat(substr);
		System.out.println(str);
	}
}


import java.io.*;

class Program {
	public static void main (String ... kanif ) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter String");
		String str = br.readLine();
		System.out.println("Enter Substring");
		String substr = br.readLine();
		if(str.contains(substr))
			System.out.println("substring found");
		else
			System.out.println("Substring not found");
	}
}


import java.io.*;

class Program {
	public static void main (String ... kanif ) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter String");
		String str = br.readLine();
		int len = str.length();
		for(int i = 0 ; i < len/2; i++){
		if(str.charAt(i) != str.charAt(len-i-1)){
			System.out.print("Not Palindrome\n");
			return;
		}

	}
		System.out.print("Palindrome\n");
	}
}

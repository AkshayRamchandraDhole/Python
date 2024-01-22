import java.io.*;

class Demo{
	public static void main (String [] args) throws IOException {
		BufferedReader  br = new BufferedReader(new InputStreamReader(System.in));
		System.out.print("Enter String : ");
		String str = br.readLine();
		String str1 = "";
		for(int i = 0; i < str.length(); i++) {
			char ch = str.charAt(i);
			if(ch >= 'A' && ch <= 'Z') {
				ch+=32;
				str1+=Character.toString(ch);
			} else if(ch >= 'a' && ch <= 'z') {
				ch-=32;
				str1+=Character.toString(ch);
			}
		}
		System.out.println(str1);
	}
}

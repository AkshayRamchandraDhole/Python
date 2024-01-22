import java.io.*;

class Program {
	public static void main (String ... kbd) throws IOException {
		int k = 0, len = 1;
		BufferedReader  br = new BufferedReader(new InputStreamReader(System.in));
		System.out.print("Enter String : ");
		String str = br.readLine();
		char ch;
		for(int i = 0; i < str.length(); i++){
			ch = str.charAt(i);
			if(ch >= 97 && ch <= 122){
				str = str.replace(ch, (char)(ch-32));
			}
			else if(ch >= 65 && ch <= 90){
				str = str.replace(ch, (char)(ch+32));
			}
		}
		System.out.println(str);
	}
}

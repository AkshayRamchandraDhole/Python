import java.io.*;

class Program1 {


	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.printf("Enter A String\n");

		String str = new String(br.readLine());

		char c = 0;

		int len = str.length();
		StringBuffer strBuffer = new StringBuffer(len);
		for (int i = 0; i < len; i++) {
			c = str.charAt(i);
			if (Character.isUpperCase(c)) {
				c = Character.toLowerCase(c);
			}
			else if (Character.isLowerCase(c)) {
				c = Character.toUpperCase(c);
			}
			strBuffer.append(c);
		}
		System.out.println("Converting case: "+strBuffer.toString());


	}
}

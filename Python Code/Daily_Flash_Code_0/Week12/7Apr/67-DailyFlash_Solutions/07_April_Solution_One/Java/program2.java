import java.io.*;
class Program {
	static float pie = 3.142f;
	public static void main(String[] args) throws IOException{
		int cnt = 0;
		char ch;
		System.out.printf("Enter Any String : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String str = br.readLine();
		for(int i = 0; i < str.length(); i++){
			if((str.charAt(i) == 'A' || str.charAt(i) == 'a' || str.charAt(i) == 'E' || str.charAt(i) == 'e' || str.charAt(i) == 'I' || str.charAt(i) == 'i' || str.charAt(i) == 'o' || str.charAt(i) == 'O' || str.charAt(i) == 'u' || str.charAt(i) == 'U') &&(str.charAt(i-1) == 'A' || str.charAt(i-1) == 'a' || str.charAt(i-1) == 'E' || str.charAt(i-1) == 'e' || str.charAt(i-1) == 'I' || str.charAt(i-1) == 'i' || str.charAt(i-1) == 'o' || str.charAt(i-1) == 'O' || str.charAt(i-1) == 'u' || str.charAt(i-1) == 'U')){

			System.out.printf("%c%c\n", str.charAt(i-1),str.charAt(i));
			}
		}
	}
}

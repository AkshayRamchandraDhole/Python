import java.io.*;
class Program {
	static float pie = 3.142f;
	public static void main(String[] args) throws IOException{
		int cnt = 0;
		char ch;
		System.out.printf("Enter Any String : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String n = br.readLine();
		System.out.println("Enter character : ");
		ch = (char)br.read();
		for(int i = 0; i < n.length(); i++){
			if(ch == n.charAt(i))
				cnt++;
		}
		System.out.printf("occurrence of %c : %d\n",ch, cnt);
	}
}

import java.io.*;

class Program {
	public static void main(String[] args) throws IOException{
		int n;
		System.out.println("Enter String : ");
		InputStreamReader inp = new InputStreamReader(System.in);
		BufferedReader br =  new BufferedReader(inp);
		String str = br.readLine();
		System.out.println("Enter Index : ");
		n = Integer.parseInt(br.readLine());
		if(n >= str.length()){
			System.out.println("Index can't br grater than string length");
			return;
		}
		str = str.replace(str.charAt(n), '\0');

		System.out.println(str);
		
	}		
}
import  java.io.*;

class Program {
	public static void main(String ... kanif) throws IOException { 
		System.out.printf("Enter String : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String st = br.readLine();
        System.out.println(st);
	}	
}
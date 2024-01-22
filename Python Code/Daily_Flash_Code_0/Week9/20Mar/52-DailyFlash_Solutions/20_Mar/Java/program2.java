import  java.io.*;

class Program {
	public static void main(String ... kanif) throws IOException { 
		System.out.printf("Enter String : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        	String st = br.readLine();
		for(int i = 0; i< st.length(); i++){
			System.out.print(st.charAt(i) + " ");
		}
		System.out.println();
	}	
}

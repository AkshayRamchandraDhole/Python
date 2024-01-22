import java.io.*;



class Program2{
	
	public static void main(String args[])throws IOException{
			
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		String input = br.readLine();

		for(int itr = 0 ;itr<input.length();itr++){
			
			switch(input.charAt(itr)){
				case 'A':
				case 'a':
				case 'E':
				case 'e':
				case 'i':
				case 'I':
				case 'o':
				case 'O':
				case 'u':
				case 'U':
					System.out.printf("%c",input.charAt(itr));

			}
		}	

	}	

}	

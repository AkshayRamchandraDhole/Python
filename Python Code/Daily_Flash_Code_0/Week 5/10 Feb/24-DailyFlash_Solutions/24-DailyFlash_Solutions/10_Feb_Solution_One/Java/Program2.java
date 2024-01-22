import java.io.*;



class Program2{

	
	public static void main(String args[])throws IOException{

		BufferedReader br  = new BufferedReader(new InputStreamReader(System.in));

		String octal = br.readLine();


			for(int itr  =0 ;itr<octal.length();itr++){

				if(octal.charAt(itr)=='0')
					System.out.printf("000");
				else if(octal.charAt(itr)=='1')
					System.out.printf("001");
				else if(octal.charAt(itr)=='2')
					System.out.printf("010");
				else if(octal.charAt(itr)=='3')
					System.out.printf("011");
				else if(octal.charAt(itr)=='4')
					System.out.printf("100");
				else if(octal.charAt(itr)=='5')
					System.out.printf("101");
				else if(octal.charAt(itr)=='6')
					System.out.printf("110");
				else if(octal.charAt(itr)=='7')
					System.out.printf("111");
				else {
					System.out.printf("Invalid number in ocatl");
					break;
				}

				
		}


	}	
}	

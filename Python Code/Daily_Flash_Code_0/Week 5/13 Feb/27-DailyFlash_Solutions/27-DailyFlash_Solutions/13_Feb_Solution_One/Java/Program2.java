import java.io.*;


class Program2{
	

	public static void main(String arhs[])throws IOException{
		
		BufferedReader br  = new BufferedReader(new InputStreamReader(System.in));

		String hex= br.readLine();


		int base = 1,decNum=0;


		for(int itr = hex.length()-1;itr>=0;itr--){

			if(hex.charAt(itr)>='0'&& hex.charAt(itr)<='9'){

				decNum = decNum + (hex.charAt(itr)-48)*base;
			}	
			else if(hex.charAt(itr)>='A'&&hex.charAt(itr)<='F'){
			
				decNum = decNum +(hex.charAt(itr)-55)*base;

			}	

			base = base * 16;
		}	

		System.out.println("Decimal : "+decNum);

	}	

}	

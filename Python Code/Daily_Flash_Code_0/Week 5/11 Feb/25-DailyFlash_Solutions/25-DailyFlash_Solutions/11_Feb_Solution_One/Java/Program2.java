import java.io.*;



class Program2{

	
	public static void main(String args[])throws IOException{

		BufferedReader br  = new BufferedReader(new InputStreamReader(System.in));	
		int num = Integer.parseInt(br.readLine());


		int rem;
		int rev=0;
		int base=1;

		while(num!=0){

			rem = num%10;
	
			rev = rev + rem*base;

			base  = base*8;

			num = num/10;

		}

		System.out.printf("%d",rev);



	}	
}	

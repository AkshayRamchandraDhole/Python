import java.io.*;



class Program5{

	
	public static void main(String args[])throws IOException{
		
		BufferedReader br  = new BufferedReader(new InputStreamReader(System.in));

		int num = Integer.parseInt(br.readLine());


		int count=0;
		while(num!=0){

			num = num/10;
			count++;
		}

		System.out.printf("Count of digit is %d",count);

	}	
}	

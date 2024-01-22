import java.io.*;


class Program3{
	
	public static void main(String args[])throws IOException{

		BufferedReader br  = new BufferedReader( new InputStreamReader(System.in));

		int num = Integer.parseInt(br.readLine());

		int rem = 0 , sum = 0 ;

		while(num!=0){

			rem = num%10;
			sum = sum + rem;

			num = num/10;		
		}	

		System.out.println("Sum of the digits :"+sum);
	}		

}	

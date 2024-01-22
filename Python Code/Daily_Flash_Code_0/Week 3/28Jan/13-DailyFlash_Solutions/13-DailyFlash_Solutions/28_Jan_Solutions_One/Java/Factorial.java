import java.io.*;


class Factorial{
	
	public static void main(String args[])throws IOException{

		BufferedReader br  = new BufferedReader(new InputStreamReader(System.in));

		System.out.printf("Enter the lowerlimit : ");
		long num1 = Long.parseLong(br.readLine());
		System.out.printf("Enter the upperlimit : ");
		long num2 = Long.parseLong(br.readLine());
		long fact = 1;
		for(long  itr = num1 ; itr<=num2 ; itr++){
		
			fact = 1;

			for(long inner = 1 ; inner<=itr ; inner++)
				fact = fact*inner;

			System.out.println("Factorial of "+itr+" is "+fact);		
	

		}
	}	
}		

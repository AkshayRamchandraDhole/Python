

import java.io.*;
class PerfectDivisor{
	
	public static void main(String args[])throws IOException{
		
		System.out.println("Enter the number");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int num = Integer.parseInt(br.readLine());


		for(int itr = 2 ; itr<=num/2 ; itr++){

			if( num%itr == 0)
				System.out.printf("%d ",itr);

		}	

	}	
}	

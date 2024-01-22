
import java.io.*;


class Program5{

	public static void main(String args[])throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.printf("Enter the number\n");
		int num=Integer.parseInt(br.readLine());


		int sum = 0;
		for(int itr = 1 ; itr<=num ; itr++){

			sum = 0;
			for(int jtr = 1 ; jtr<=itr/2 ; jtr++){

				if(itr%jtr==0)
					sum = sum + jtr;

			}

			if(itr == sum || itr == 1)
				System.out.printf("%d is Perfect\n",itr);
		}	
	

	}	

}	

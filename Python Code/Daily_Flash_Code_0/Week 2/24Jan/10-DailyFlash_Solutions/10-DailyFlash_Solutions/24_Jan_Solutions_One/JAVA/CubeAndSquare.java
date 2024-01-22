
import java.io.*;

class CubeAndSquare{
	
	public static void main(String args[])throws IOException{


		System.out.println("Enter the number");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int num = Integer.parseInt(br.readLine());

		for(int itr = 1 ;itr <= num; itr++){

			if(itr%2!=0)
				System.out.printf("Cube of %d : %d and Square of %d:%d\n",itr,itr*itr*itr,itr,itr*itr);
		}


	}	

}	

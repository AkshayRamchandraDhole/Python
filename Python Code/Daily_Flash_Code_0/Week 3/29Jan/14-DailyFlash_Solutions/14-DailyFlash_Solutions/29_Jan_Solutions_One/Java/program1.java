
import java.io.*;


class Program1{

	public static void main(String args[])throws IOException{

		BufferedReader br =new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the number");
		int num = Integer.parseInt(br.readLine());

		for(int itr =10;itr>0;itr--){

			System.out.printf("%d x %d = %d\n",num,itr,num*itr);
		}	

		

	}	
}	

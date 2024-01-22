
import java.io.*;


class Program1{

	public static void main(String args[])throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.printf("Enter the number\n");
		int num=Integer.parseInt(br.readLine());


		int temp = 1;
		for(int itr = 0 ;itr <num;itr++){

			System.out.printf("%d\n",temp);
			temp = temp + num;


		}
	

	}	

}	

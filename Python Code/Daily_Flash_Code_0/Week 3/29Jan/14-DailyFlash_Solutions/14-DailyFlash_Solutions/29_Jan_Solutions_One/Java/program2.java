import java.io.*;


class Program2{

	
	public static void main(String...args)throws IOException{

		BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the number");
		int num = Integer.parseInt(br.readLine());

		System.out.printf("Second Successor : %d\n",num+2);
		System.out.printf("Second predcessor : %d",num-2);


	}	
}	

import java.io.*;



class Program3{
	
	public static void main(String args[])throws IOException{
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the number\n");
		int num = Integer.parseInt(br.readLine());

		for(int itr = num ; itr>0 ; itr--){

			if(itr%2==0)
				System.out.printf("%d\t",itr);
		}




	}	

}
	

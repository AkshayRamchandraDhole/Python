import java.io.*;



class Program1{
	
	public static void main(String args[])throws IOException{
			
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int len = Integer.parseInt(br.readLine());
		int arr [] = new int[100];
		for(int itr = 0; itr<len;itr++){
		
			arr[itr]=Integer.parseInt(br.readLine());
	
		}	
	
		int sum = 0;
		for(int itr = 0;itr<len;itr++){
		
			sum = sum + arr[itr];
		}	

		System.out.printf("Sum = %d\n",sum);

		System.out.printf("Avg = %f",(float) sum/len);

	}	

}	

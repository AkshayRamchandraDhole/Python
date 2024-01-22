import java.io.*;



class Program5{

	
	public static void main(String args[])throws IOException{

		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int num = Integer.parseInt(br.readLine());

		int rem=0;
		int count=0;
		while(num!=0){
		
			rem = num%10;
			if(rem%2==0)
				count++;

			num = num/10;
	
		}	

		System.out.printf("%d",count);
	
	}	
}	

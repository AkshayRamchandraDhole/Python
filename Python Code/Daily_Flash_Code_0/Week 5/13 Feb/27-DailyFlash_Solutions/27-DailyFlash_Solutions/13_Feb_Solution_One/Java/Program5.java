import java.io.*;


class Program5{

	
	public static void main(String args[])throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int oddCount=0,evenCount=0,num=Integer.parseInt(br.readLine());
		int rem;
		while(num!=0){

			rem = num%10;
			
			if (rem%2==0)
				evenCount++;
			else
				oddCount++;
			
			num = num/10;

		}

		System.out.printf("Even count %d\n",evenCount);
		System.out.printf("Odd count %d\n",oddCount);

			
	}	
}	

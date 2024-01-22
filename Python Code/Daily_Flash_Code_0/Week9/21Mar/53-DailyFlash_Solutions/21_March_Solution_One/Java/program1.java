import java.io.*;



class Program1{
	
	public static void main(String args[])throws IOException{
			
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int num = Integer.parseInt(br.readLine());

		int sum = 0;
		while(num!=0){


			sum = sum + power(num,num*num-1);

			num--;

		}

			System.out.printf("Sum = %d",sum);

	}

	static int power(int lower,int upper){

		int pow = lower;

		while(upper!=0){

			pow = pow*lower;
			upper--;
		}

		System.out.printf("power = %d",pow);

		return pow;



	}	
}	

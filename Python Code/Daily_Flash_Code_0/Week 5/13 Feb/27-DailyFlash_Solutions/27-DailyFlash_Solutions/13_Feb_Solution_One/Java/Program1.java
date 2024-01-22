import java.io.*;



class Program1{

	
	public static void main(String args[])throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the number : ");
		int num = Integer.parseInt(br.readLine());

		int rem = 0;
		int sum =0,fact = 1;
		int temp = num;
		while(num!=0){

			rem = num%10;
			fact = 1;
			for(int itr = 2 ; itr<=rem; itr++){

				fact = fact*itr;

			}	

			sum = sum+fact;
			num = num/10;
		}
	
		if(sum==temp){
	
			System.out.printf("The number is Strong number");
		}else{

			System.out.printf("The number is not Strong number");
		}


		
	}	
}	

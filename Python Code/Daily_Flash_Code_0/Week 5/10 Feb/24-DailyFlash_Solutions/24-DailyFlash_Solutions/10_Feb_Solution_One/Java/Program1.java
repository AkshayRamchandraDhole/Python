import java.io.*;



class Program1{

	
	public static void main(String arsg[])throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter the number");

		int num = Integer.parseInt(br.readLine());

		int sum = 0;


		for (int itr =1 ; itr <= num/2 ; itr++){

			if(num%itr==0){
				sum = sum+itr;
			}
		}

		if(sum > num){

			System.out.printf("The number is abundant \n");
		}else{
			System.out.printf("The number is not abundant  \n");
		}
	}
		
}	

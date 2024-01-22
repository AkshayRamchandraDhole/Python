import java.io.*;

class Series{


	static boolean pallindrome(int num){

		int temp = num;
		int rev = 0;

		//While loop to reverse the Number
		while(temp > 0){

			rev = (rev*10) + temp%10;
			temp/=10;
		};

		if(num == rev)
			return true;
		else 
			return false;
			
	}



	public static void main(String ... args)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int n =0;

		while(true){

			try{

				System.out.println("Enter the length of Array : ");
				n = Integer.parseInt(br.readLine());

				break;

			}catch(NumberFormatException nfe){

				System.out.println("NFE : Enter valid number !!!");
			}
		}

		int arr[] = new int[n];
		System.out.println("Enter Array Elements ");

		for(int i = 0; i < n; i++){
				arr[i] = Integer.parseInt(br.readLine());
		}

		System.out.printf("Pallindrome Numbers in Array are\n");
		for(int i = 0; i < n; i++){
				if(Series.pallindrome(arr[i])) 
				System.out.print(arr[i]+"\t");
		}
		System.out.println();

	}

}

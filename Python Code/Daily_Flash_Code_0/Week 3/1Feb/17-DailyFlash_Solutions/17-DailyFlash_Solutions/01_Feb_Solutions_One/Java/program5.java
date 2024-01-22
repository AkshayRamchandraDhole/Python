


import java.io.*;


class Program5{

	public static void main(String ... args)throws IOException{


		BufferedReader br = new BufferedReader( new InputStreamReader(System.in));

		System.out.println("Enter the first number");
		int num1 = Integer.parseInt(br.readLine());

		System.out.println("Enter the second number");
		int num2 = Integer.parseInt(br.readLine());
		
		int reminder,temp;

		if(num1>num2){
			reminder=num1%num2;
		}else{
			reminder=num2%num1;
		}

		temp=reminder;

		while(reminder!=0){
			temp = reminder;	

			if(num1>num2){
				reminder=num2%reminder;
				num2 = temp;
			}
			else{
				reminder=num1%reminder;
				num1 = temp;
			}
		}
		
		if(reminder==0){
			if(num1>num2){
				System.out.println("GCD = "+num2);
			}else{
				
				System.out.println("GCD = "+num1);
			}
		}else{

			System.out.println("GCD = "+temp);
		}

		
	}

}

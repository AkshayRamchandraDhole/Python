import java.io.*;

class Com{


	static int fact(int num){

		int fact =1;

		while(num>0){
			fact *=num;
			num -= 1;
		}

		return fact;
	}


	public static void main(String ... args)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int n = 0,r = 0;

		while(true){

			try{

				System.out.println("Enter Number of Employees : ");
				n = Integer.parseInt(br.readLine());
				System.out.println("Enter No of medals to be distributed : ");
				r = Integer.parseInt(br.readLine());
								

				break;

			}catch(NumberFormatException nfe){

				System.out.println("NFE : Enter valid number !!!");
			}
		}

		float per = (float) Com.fact(n)/(Com.fact(n-r));
		System.out.printf("There are %.2f ways to distribute %d medals among %d Employees \n",per,r,n);
	}
}

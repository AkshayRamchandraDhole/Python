import java.io.*;

class Pendulum{


	public static void main(String ... args)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		float freq = 0;

		while(true){

			try{

				System.out.println("Enter the Frequency : ");
				freq = Float.parseFloat(br.readLine());
				
				break;

			}catch(NumberFormatException nfe){

				System.out.println("NFE : Enter valid number !!!");
			}
		}

		System.out.printf("Period is : %.2f\n",1/freq);
	}
}

import java.io.*;

class Com{

	public static void main(String ... args)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int a = 0,b = 0,c = 0;

		while(true){

			try{

				System.out.println("Enter Value of a ");
				a = Integer.parseInt(br.readLine());
				System.out.println("Enter Value of b ");
				b = Integer.parseInt(br.readLine());
				System.out.println("Enter Value of c ");
				c = Integer.parseInt(br.readLine());

				break;

			}catch(NumberFormatException nfe){

				System.out.println("NFE : Enter valid number !!!");
			}
		}

		float x = (float) (-b + Math.sqrt(Math.pow(b,2) - 4*a*c)) / (2*a);	
		float y = (float) (-b - Math.sqrt(Math.pow(b,2) - 4*a*c)) / (2*a);	

		System.out.printf("X = %.2f\n",x);
		System.out.printf("Y = %.2f\n",y);
	}
}

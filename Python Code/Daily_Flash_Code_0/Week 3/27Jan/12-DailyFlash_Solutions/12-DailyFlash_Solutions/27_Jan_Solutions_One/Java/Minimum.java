import java.io.*;


class Minimun{

	
	public static void main(String args[])throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.printf("Enter the number1 : ");
		int num1 = Integer.parseInt(br.readLine());
		System.out.printf("Enter the number2 : ");
		int num2 = Integer.parseInt(br.readLine());
			
		System.out.println("The Minimum number amongst"+num1+" and "+num2+" is "+(num1<num2?num1:num2));

	}	
}	   

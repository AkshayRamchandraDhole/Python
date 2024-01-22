import java.io.*;


class Program3{
	
	public static void main(String args[])throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.printf("Enter the num1 : ");
		int num1 = Integer.parseInt(br.readLine());
		System.out.printf("Enter the num2 : ");
		int num2 = Integer.parseInt(br.readLine());


		System.out.printf("Quotient : %d\n",num1>num2?num1/num2:num2/num1);
		System.out.printf("Reminder : %d\n",num1>num2?num1%num2:num2%num1);
	}	
}	

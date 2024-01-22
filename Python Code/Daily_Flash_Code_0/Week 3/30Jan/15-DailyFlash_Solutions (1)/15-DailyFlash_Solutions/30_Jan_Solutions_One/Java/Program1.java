import java.io.*;


class Program1{

	public static void main(String argsp[])throws IOException{
		
		BufferedReader br =new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the number 1 ");

		int num1 = Integer.parseInt(br.readLine());

		System.out.println("Enter the number 2 ");

		int num2 = Integer.parseInt(br.readLine());

		System.out.printf("Before Swaping num1 = %d and num2 = %d \n ",num1,num2);

		num1 = num1+num2;
		num2 = num1-num2;
		num1 = num1-num2;

		System.out.printf("After Swaping num1 = %d and num2 = %d",num1,num2);
	}	
}

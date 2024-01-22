import java.io.*;

class Minimum{
	
	public static void main(String args[])throws IOException{
		
		BufferedReader br  =new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the number 1 : ");
		int num1 = Integer.parseInt(br.readLine());
		System.out.println("Enter the number 2 : ");
		int num2 = Integer.parseInt(br.readLine());
		System.out.println("Enter the number 3 : ");
		int num3 = Integer.parseInt(br.readLine());

		if(num1<num2 && num1<num3)
			System.out.printf("%d is minimum\n",num1);
		else if(num2<num1 && num2<num3)
			System.out.printf("%d is minimum\n",num2);
		else if(num3<num1 && num3<num2)
			System.out.printf("%d is minimum\n",num3);

	}	

}	

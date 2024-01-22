
import java.io.*;
class Program {
	public static void main(String[] args) throws IOException{
	
		int n,temp, sum = 0, fact;
		System.out.printf("Enter Number: ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		temp = n;
		while(n!=0){
			fact = 1;
			for(int i = 1; i<= n%10; i++){

				fact = fact * i;
			}
			sum = sum + fact;
			n = n / 10;
		}
		if(sum == temp){
			System.out.printf("Number is Strong Number\n");
		}
		else{
			System.out.printf("Number is not Strong Number\n");
		}
	}
}
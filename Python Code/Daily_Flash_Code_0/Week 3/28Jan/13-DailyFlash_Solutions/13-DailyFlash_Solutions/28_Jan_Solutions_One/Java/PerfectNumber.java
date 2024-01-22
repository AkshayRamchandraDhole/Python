import java.io.*;


class PerfectNumber{

	
	public static void main(String args[])throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the number : ");
		int num = Integer.parseInt(br.readLine());

		int sum = 0;
		for(int itr = 1 ; itr<=num/2 ; itr++){

			if(num%itr==0)
				sum = sum + itr;

		}

		if (sum == num)
			System.out.printf("%d is Perfect number",num);
		else
			System.out.printf("%d is not Perfect number",num);

	}	
}	

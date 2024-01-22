import java.io.*;

class Pargaon {

	public static void main(String[] args) throws IOException{
		

		int n = 0,i;
		System.out.printf("Enter Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		try {
			n = Integer.parseInt(br.readLine());
		}
		catch(NumberFormatException e){
			System.exit(0);
		}

		if(n < 0)
			System.exit(0);
		
		i = 10;
		while(i > 0){
			System.out.printf("%d * %d = %d\n", n , i , n * i);
			i--;
		}
	}
}

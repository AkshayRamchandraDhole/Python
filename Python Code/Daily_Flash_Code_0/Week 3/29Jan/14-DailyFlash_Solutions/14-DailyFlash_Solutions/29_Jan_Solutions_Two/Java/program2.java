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
		System.out.printf("Second Successor : %d\nSecond Predecessor : %d\n", n + 2, n - 2);
	}
}

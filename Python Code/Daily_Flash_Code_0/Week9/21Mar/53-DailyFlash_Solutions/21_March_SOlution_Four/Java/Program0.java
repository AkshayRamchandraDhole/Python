import java.io.*;

class Program0 {


	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		double sum = 0;
		int l = 0;
		System.out.printf("Enter The Length of the Series\n");

		l = Integer.parseInt(br.readLine());


		for(int i = 1; i <= l; i++)
			sum+=Math.pow(i,i*(i-1));

		System.out.println("Sum of Series = "+sum);
	}
}

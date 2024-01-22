import java.io.*;

class Program0 {


	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		float sum = 0;
		int l = 0;
		System.out.printf("Enter The Length of the Series\n");
		l = Integer.parseInt(br.readLine());

		System.out.printf("Enter value of x\n");
		int x = Integer.parseInt(br.readLine());

		System.out.printf("Enter value of y\n");
		int y = Integer.parseInt(br.readLine());
		x = x+y;

		for(int i = 1; i <= l; i++)
			sum+=(i/(Math.pow(x,i)));
		System.out.println("Sum of Series = "+String.format("%.4f",(float)sum));
	}
}

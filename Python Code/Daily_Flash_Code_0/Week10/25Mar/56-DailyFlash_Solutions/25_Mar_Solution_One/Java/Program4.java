import java.io.*;

class Program4 {


	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int base = 0;
		float area = 0,height = 0;

		System.out.printf("Enter Base of Triangle\n");
		base = Integer.parseInt(br.readLine());
		
		System.out.printf("Enter Area of Triangle\n");
		area = Float.parseFloat(br.readLine());

		height = 2*area/base;
		System.out.printf("Height Of Triangle = %.2f\n",height);
		
	}
}




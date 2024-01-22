import java.io.*;

class Program4 {


	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		float area = 0,height = 0,base = 0;

		System.out.printf("Enter Height of Triangle\n");
		height = Integer.parseInt(br.readLine());
		
		System.out.printf("Enter Area of Triangle\n");
		area = Float.parseFloat(br.readLine());

		base = 2*area/height;
		System.out.printf("Base Of Triangle = %.2f\n",base);
		
	}
}




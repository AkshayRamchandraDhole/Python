import java.io.*;
class Program {
	public static void main(String[] args) throws IOException{
			
		float b;
	       	int h;
		int area;
		
		System.out.printf("Enter area and height\n");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		area = Integer.parseInt(br.readLine());
		h = Integer.parseInt(br.readLine());
		b = (2 * area)/h;
		System.out.printf("Base : %f\n", b);
	}
}

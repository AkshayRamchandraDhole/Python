import java.io.*;
class Program {
	public static void main(String[] args) throws IOException{
			
		int b;
	       	float h;
		int area;
		
		System.out.printf("Enter area and base\n");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		area = Integer.parseInt(br.readLine());
		b = Integer.parseInt(br.readLine());
		h = (2 * area)/b;
		System.out.printf("Height : %f\n", h);
	}
}

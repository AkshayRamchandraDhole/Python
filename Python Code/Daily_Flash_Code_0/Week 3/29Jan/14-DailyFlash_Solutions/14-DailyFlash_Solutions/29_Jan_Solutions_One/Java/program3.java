import java.io.*;


class Program3{

	
	public static void main(String args[])throws IOException{

		BufferedReader br  = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the length");
		int len = Integer.parseInt(br.readLine());

		System.out.println("Enter the breadth");
		int breadth = Integer.parseInt(br.readLine());

		System.out.printf("Area of rectangle  = %d",len*breadth);

		
	}	
}	

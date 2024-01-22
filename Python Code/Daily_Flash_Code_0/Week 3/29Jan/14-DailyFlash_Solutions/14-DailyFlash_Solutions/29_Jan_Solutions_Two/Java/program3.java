import java.io.*;

class Pargaon {

	public static void main(String[] args) throws IOException{
		

		int l = 0, b = 0;
		System.out.printf("Enter Length and breadth : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		try {
			l = Integer.parseInt(br.readLine());
			b = Integer.parseInt(br.readLine());
		}
		catch(NumberFormatException e){
			System.exit(0);
		}	
		if(l < 0 || b < 0 || l < b)
			System.exit(0);

		System.out.printf("Area Of Rectangle = %d sq unit\n", l * b);
	}
}
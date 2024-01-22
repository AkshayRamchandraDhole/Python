import java.io.*;


class Ohms{

	public static void main(String ... args)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the currenmt value : ");
		int current = Integer.parseInt(br.readLine());

		System.out.println("Enter the resistance value : ");
		int resistance = Integer.parseInt(br.readLine());


		System.out.println("Voltage V = "+current*resistance);


	}	
}	

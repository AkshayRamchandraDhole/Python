



import java.io.*;


class Program{

	public static void main(String ... args)throws IOException{


		BufferedReader br = new BufferedReader( new InputStreamReader(System.in));

		System.out.println("Enter the input");
		int input = Integer.parseInt(br.readLine());


		System.out.println(input+" hour in seconds "+(input*3600));
	}

}	

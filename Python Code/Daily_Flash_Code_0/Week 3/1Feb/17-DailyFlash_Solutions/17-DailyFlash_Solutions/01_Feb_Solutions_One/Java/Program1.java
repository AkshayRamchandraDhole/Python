import java.io.*;


class Program{

	public static void main(String ... args)throws IOException{
	

		BufferedReader br = new BufferedReader( new InputStreamReader(System.in));
	
		System.out.println("Enter the input");
		int input = Integer.parseInt(br.readLine());


		for(int itr  = input-1 ; itr > 0 ; itr = itr-2){

			System.out.printf("%d\n",itr);

		}
	}	

}	

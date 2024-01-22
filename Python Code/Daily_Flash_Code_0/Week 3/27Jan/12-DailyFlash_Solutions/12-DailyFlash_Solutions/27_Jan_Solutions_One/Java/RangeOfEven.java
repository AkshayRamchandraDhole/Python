import java.io.*;

class RangeOfEven{

	
	public static void main(String args[])throws IOException{

		BufferedReader br =new BufferedReader(new InputStreamReader(System.in));

		System.out.printf("Min of Series : ");
		int lowerlimit = Integer.parseInt(br.readLine());
		System.out.printf("Max of Series : ");
		int upperlimit = Integer.parseInt(br.readLine());


		for(int itr = lowerlimit ; itr < upperlimit ; itr++){

			System.out.print(itr%2==0?itr:" ");
	
		}	

	}	
}	

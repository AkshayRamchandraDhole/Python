import java.io.*;


class Program4{

	
	public static void main(String args[])throws IOException{

		int num = 3;
		for(int itr = 0 ;itr<4;itr++){

			for(int jtr = 0 ;jtr<=itr ; jtr++ ){

				System.out.printf("%d\t",num);
				num++;
			}
			System.out.printf("\n");
			num = num-(itr+2);
	
		}


	}	
}	

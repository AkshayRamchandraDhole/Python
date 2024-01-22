
import java.io.*;


class Program3{

	public static void main(String args[])throws IOException{

		char ch = 'A';

		for(int itr =0; itr<=4 ; itr++){

			for(int jtr = 5-itr ; jtr>0;jtr--){
			
				System.out.printf("%c\t",ch+itr);
			}	
			System.out.printf("\n");

		}
	

	}	

}	

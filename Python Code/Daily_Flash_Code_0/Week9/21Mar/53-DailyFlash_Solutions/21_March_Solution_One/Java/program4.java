import java.io.*;



class Program1{
	
	public static void main(String args[]){
			
		for(int itr = 0; itr<4 ; itr++){


			for(int jtr = 0; jtr<=6-itr ; jtr++){

				System.out.print(jtr<itr?"\t":jtr+(itr*itr)+"\t");

			}
			System.out.printf("\n");
		}	


	}	

}	

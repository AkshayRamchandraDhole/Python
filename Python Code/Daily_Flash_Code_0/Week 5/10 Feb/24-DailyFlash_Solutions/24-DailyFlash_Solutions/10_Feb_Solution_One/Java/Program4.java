

class Program4{
	

	public static void main(String args[]){

		for(int itr=0 ; itr<4 ; itr ++){
		
			for(int jtr = 0 ; jtr < 4 ;jtr++){
			
				System.out.print(jtr<3-itr?"\t":3-jtr==itr?3+"\t":jtr*(itr+jtr)+"\t");
			}	
			System.out.printf("\n");
		}	
	}	
}
	

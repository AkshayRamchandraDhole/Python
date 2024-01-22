

class Program4{

	
	public static void main(String args[]){

		int ch = 65;

		for(int itr = 0 ; itr<4 ; itr++){

			ch = 65 + itr;
			
			for(int jtr = 0 ;jtr<4; jtr++){
				
				System.out.print(jtr<3-itr?"\t":(char)ch--+""+(itr+jtr)+"\t");
			}	
			System.out.println();
		}		
	}		
}	

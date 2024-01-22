

class Program4{

	public static void main(String ... args){

		int num = 7;
		for(int itr = 0 ; itr<4;itr++){
		
			for(int jtr=0 ; jtr<=itr ; jtr++){
			
				System.out.printf("%d\t",num--);
			}	
			System.out.printf("\n");
			num = num+1;
		}
	}	
}	

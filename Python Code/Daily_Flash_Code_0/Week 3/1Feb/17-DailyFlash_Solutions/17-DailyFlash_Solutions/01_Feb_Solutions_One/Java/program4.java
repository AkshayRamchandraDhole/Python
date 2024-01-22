



class Program4{

	
	public static void main(String []sk){
		
		for(int itr = 0; itr<4 ; itr++){

		for(int jtr = 0 ;jtr<4-itr ; jtr++){

			if(jtr%2==0){
				System.out.print("+\t");
			}else{
			System.out.print("=\t");
			}
		}
		System.out.println("");
	}
	}
}

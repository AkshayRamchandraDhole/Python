class Pattern{

	
	public static void main(String args[]){
		
		int num =1;
		for(int outeritr = 0 ; outeritr < 4 ; outeritr++){

			for(int inneritr = 0 ; inneritr <= outeritr ; inneritr++ ){

				System.out.printf("%d\t",num*num*num);
				num++;
			}
			System.out.printf("\n");
	
		}
	}	
}	

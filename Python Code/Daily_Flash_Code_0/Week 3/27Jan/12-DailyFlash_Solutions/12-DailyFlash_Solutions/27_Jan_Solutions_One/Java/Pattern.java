class Pattern{
	
	public static void main(String args[]){
		
		int num = 1;

		for(int outerItr = 0 ; outerItr < 4 ; outerItr++){

			for(int innerItr = 0 ; innerItr <= outerItr ; innerItr++){
				System.out.print(num*num+"\t");
				num++;
			}
			System.out.printf("\n");


		}	
	}	
}   

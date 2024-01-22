class Program3 {


	public static void main(String[] args) {

		String s = "HELLO WORLD";
		for(int i = 0; i < 7; i++){

			for(int j = 0; j <= i; j++){

				if(i+j <= 6){
					
					System.out.printf("%c\t",s.charAt(j));

				}
				else if(j < 4){	
					System.out.printf(" \t");
				}
			}
			System.out.printf("\n");
		}

	}
}

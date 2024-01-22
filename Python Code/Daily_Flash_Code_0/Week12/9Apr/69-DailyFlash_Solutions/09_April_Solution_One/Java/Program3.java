class Program3 {


	public static void main(String[] args) {

		for(int i = 0; i < 7; i++){

			for(int j = 0; j <= i; j++){

				if(i+j <= 6){
					if(i < 4)
						System.out.printf("%c\t",(i+65));
					else{
						System.out.printf("%c\t",(7-i+64));
					}

				}
				else if(j < 4){	
					System.out.printf(" \t");
				}
			}
			System.out.printf("\n");
		}

	}
}

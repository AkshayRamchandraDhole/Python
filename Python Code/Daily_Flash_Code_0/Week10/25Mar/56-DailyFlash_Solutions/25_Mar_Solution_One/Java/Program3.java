class Program3 {


	public static void main(String[] args) {

		int num = 1;
		int cnt = 2;
		for(int i = 0; i < 7; i++){

			for(int j = 0; j <= i; j++){

				if(i+j <= 6){
					if(num <= 10)
						System.out.printf("%d\t",num++);
					else{
						System.out.printf("%d\t",num-cnt);
						num++;
						cnt+=2;
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

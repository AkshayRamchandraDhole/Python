class Program3 {


	public static void main(String[] args) {

		for(int i = 0; i < 4; i++){
			int num = (i*i) + i;
			for(int j = 0; j < 7-i; j++)
				if (j < i)
					System.out.print(" \t");
				else 
					System.out.print(num++ + "\t");
			System.out.println();
		}


	}
}

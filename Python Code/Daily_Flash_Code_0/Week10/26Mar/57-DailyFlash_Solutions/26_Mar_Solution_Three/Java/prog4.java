class Demo {
	public static void main(String[] args) {
		int num = 1;
		for(int i = 0; i < 7; i++) {
			if(i < 4) {
				for(int j = 0; j < i + 1; j++) {
					if(j == 0)
						System.out.print("H");
					if(j == 1)
						System.out.print("E");
					if(j == 2 || j == 3)
						System.out.print("L");
				}
			} else {
				for(int j = 0; j < 7 - i; j++) {
					
					if(j == 0)
						System.out.print("H");
					if(j == 1)
						System.out.print("E");
					if(j == 2 || j == 3)
						System.out.print("L");
				}
			}
			System.out.println();
		}
	}
}

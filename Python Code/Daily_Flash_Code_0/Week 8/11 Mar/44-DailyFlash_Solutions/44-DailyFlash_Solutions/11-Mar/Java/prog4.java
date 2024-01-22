class Demo {
	public static void main(String[] args) {
		int a = 0, b = 1, c = 0;
		for(int i = 0; i < 4; i++) {
			for(int j = 0; j < 7; j++) {
				if(j < 4) {
					if(j < 3 - i) {
						System.out.print("\t");
					} else {
						if(i == 0) {
							System.out.print(a + "\t");
						} else if(i == 1 && j == 2) {
							System.out.print(b + "\t");
						} else {
							c = a + b;
							System.out.print(c + "\t");
							a = b;
							b = c;
						}
					}
				} else {
					if(j < 4 + i) {
						c = a + b;
						System.out.print(c + "\t");
						a = b;
						b = c;
					}
				}
			}
			System.out.println();
		}
	}
}

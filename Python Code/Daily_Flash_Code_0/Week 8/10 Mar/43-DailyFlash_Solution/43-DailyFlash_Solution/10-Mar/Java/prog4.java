class Demo {
	public static void main(String[] args) {
		char ch;
		for(int i = 0; i < 4; i++) {
			ch = 'A';
			for(int j = 0; j < 7; j++) {
				if(j < 4) {
					if(j >= 3 - i) {
						System.out.print(ch);
						ch++;
					} else {
						System.out.print(" ");
					}
				} else {
					if(j < 4 + i) {
						System.out.print(ch);
						ch++;
					}
				}
			}
			System.out.println();
		}
	}
}

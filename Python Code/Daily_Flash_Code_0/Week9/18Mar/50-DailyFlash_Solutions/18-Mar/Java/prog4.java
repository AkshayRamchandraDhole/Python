class Demo {
	public static void main(String[] args) {
		for(int i = 0; i < 4; i++) {
			for(int j = 0; j < 7 - i; j++) {
				if(j < i) {
					System.out.print(" ");
				} else {
					System.out.print(j % 2 == 0 ? "*" : "0");
				}
			}
			System.out.println();
		}
	}
}

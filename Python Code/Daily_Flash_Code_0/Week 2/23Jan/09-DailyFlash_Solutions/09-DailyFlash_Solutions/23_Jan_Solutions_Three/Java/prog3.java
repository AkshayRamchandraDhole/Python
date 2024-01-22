class Demo {
	public static void main(String[] args) {
		int num1 = 1;
		for(int i = 0; i < 4; i++) { 
			for(int j = 0; j <= i; j++) {
				System.out.print(num1 + " ");
				num1++;
			}
			System.out.println();
		}
	}
}

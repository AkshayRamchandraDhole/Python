class Demo {
	public static void main(String[] args) {
		System.out.println("First 50 odd numbers are : ");
		for(int i = 0; i < 100; i++) {
			System.out.print((i + 1) % 2 == 0 ? (i + 1) + " " :"");
		}
	}
}

class Demo {
	public static void main(String[] args) {
		for(int i = 1; i <= 100; i++) {
			System.out.print(i % 3 == 0 || i % 5 == 0 ? i + " " : "");
		}
	}
}

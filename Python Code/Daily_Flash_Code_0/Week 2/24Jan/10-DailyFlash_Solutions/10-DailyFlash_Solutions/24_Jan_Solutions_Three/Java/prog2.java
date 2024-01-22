class Demo {
	public static void main(String[] args) {
		for(int i = 1; i <= 100; i++) {
			System.out.print(i % 4 == 0 && i % 7 == 0 ? i + " " : "");
		}
	}
}

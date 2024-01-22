class Demo {
	public static void main(String[] args) {
		int num = 1;
		for(int i = 0; i < 4; i++) {
			for(int j = 0; j <= i; j++) {
				System.out.print(num * num * num + " ");
				num++;
			}
			System.out.println();
		}
	}
}

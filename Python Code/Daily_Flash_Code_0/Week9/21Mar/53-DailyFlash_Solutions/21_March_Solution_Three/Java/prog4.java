class Demo {
	public static void main(String[] args) {
		int num;
		for(int i = 0; i < 4; i++) {
			num = i * (i + 1);
			for(int j = 0; j < 7 - i; j++) {
				if(j < i) {
					System.out.print("\t");
				} else {
					System.out.print(num);
					System.out.print("\t");
					num++;
				}
			}
			System.out.println();
		}
	}
}

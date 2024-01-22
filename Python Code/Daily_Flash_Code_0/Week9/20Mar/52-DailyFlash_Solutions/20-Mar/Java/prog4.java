class Demo {
	public static void main(String[] args) {
		int num = 1;
		char ch = 'A';
		for(int i = 0; i < 4; i++) {
			num = i * 2;
			for(int j = 0; j < 7 - i; j++) {
				if(j < i) {
					System.out.print("\t");
				} else {
					System.out.print(ch);
					System.out.print(num);
					System.out.print("\t");
					ch++;
					num++;
				}
			}
			System.out.println();
		}
	}
}

class Demo {
	public static void main(String[] args) {
		int num = 1;
		for(int i = 0; i < 4; i++) {
			for(int j = 0; j < 7 - i; j++) {
				if(j < i) {
					System.out.print(" ");
				} else {
					if(i % 2 == 0) {
						System.out.print(num);
						num++;
						if(j == 6 - i)
							num--;
					}

					else {
						System.out.print(num);
						num--;
						if(j == 6 - i)
							num++;
					}
				}
			}
			System.out.println();
		}
	}
}

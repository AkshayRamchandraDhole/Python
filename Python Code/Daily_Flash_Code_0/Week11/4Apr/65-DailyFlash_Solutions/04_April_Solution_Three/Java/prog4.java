import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
			
		for(int i = 0; i < 9; i++) {
			for(int j = 0; j < 5; j++) {
				if(i < 5) {
					if(j < 4 - i)
						System.out.print(" ");
					else {
						if(j == 4)
							System.out.print("O");
						if(j == 3 || j == 2)
							System.out.print("L");
						if(j == 1)
							System.out.print("E");
						if(j == 0)
							System.out.print("H");
					}
				} else {
					if(j <  i - 4)
						System.out.print(" ");
					else {
						
						if(j == 4)
							System.out.print("O");
						if(j == 3 || j == 2)
							System.out.print("L");
						if(j == 1)
							System.out.print("E");
						if(j == 0)
							System.out.print("H");
					}
				}
			}
			System.out.println();
		}
	}
}

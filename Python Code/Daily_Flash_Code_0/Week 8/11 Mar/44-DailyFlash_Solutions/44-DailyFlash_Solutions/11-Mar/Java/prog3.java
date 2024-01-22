import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int num = 0, f = 0, fact = 1;
		Scanner sc = new Scanner(System.in);
		do {
			if(f > 0)
				System.out.println(fact);
			num = sc.nextInt();
			fact = 1;
			for(int i = 1; i <= num; i++) {
				fact *= i;
			}		
			f = 1;
		} while(num >= 0);
	
	}
}

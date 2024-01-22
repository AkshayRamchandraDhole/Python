import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int l, sum, mul = 1;
		Scanner sc = new Scanner(System.in);
		l = sc.nextInt();
		for(int i = 1; i <= l; i++) {
			sum = 0;
			for(int j = 1; j <= i; j++) {
				sum += j;
			}
			mul *= sum;
		}
		System.out.println(mul);
	}
}

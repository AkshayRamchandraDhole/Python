import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int l, mul = 0;
		Scanner sc = new Scanner(System.in);
		l = sc.nextInt();
		for(int i = 1; i <= l; i++) {
			mul += Math.pow(i, i) * (i - 1);
		}
		System.out.println(mul);
	}
}

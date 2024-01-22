import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		float x, y, l, mul = 0;
		Scanner sc = new Scanner(System.in);
		l = sc.nextFloat();
		x = sc.nextFloat();
		y = sc.nextFloat();
		for(int i = 1; i <= l; i++) {
			mul += (i) / Math.pow(x + y, i);
		}
		System.out.println(mul);
	}
}

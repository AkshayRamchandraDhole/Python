import java.util.Scanner;

class Demo {

	static int fact(int n) {
		if(n == 1)
			return 1;
		return n * fact(n - 1);
	}
	public static void main(String[] args) {
		float l, mul = 0;
		int x, y;
		Scanner sc = new Scanner(System.in);
		l = sc.nextFloat();
		x = sc.nextInt();
		y = sc.nextInt();
		for(int i = 1; i <= l; i++) {
			mul += (i) * (x + y)/ (float)fact(i);
		}
		System.out.println(mul);
	}
}

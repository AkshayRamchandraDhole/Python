import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int l, mul = 1;
		Scanner sc = new Scanner(System.in);
		l = sc.nextInt();
		for(int i = 1; i <= l; i++) {
			mul *= Math.pow(i, i);
		}
		System.out.println(mul);
	}
}

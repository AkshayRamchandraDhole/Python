import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int len, mul = 1;
		System.out.print("Enter len : ");
		Scanner sc = new Scanner(System.in);
		len = sc.nextInt();
		for(int i = 1; i <= len; i++) {
			mul *= i;
		}
		System.out.println(mul);
	}
}

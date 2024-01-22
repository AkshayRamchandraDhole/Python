import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter num : ");
		int num = sc.nextInt();
		for(int i = 0; i < 10; i++) {
			System.out.println(num + " * " + (10 - i) + " = " + num * (10 - i));
		}
	}
}

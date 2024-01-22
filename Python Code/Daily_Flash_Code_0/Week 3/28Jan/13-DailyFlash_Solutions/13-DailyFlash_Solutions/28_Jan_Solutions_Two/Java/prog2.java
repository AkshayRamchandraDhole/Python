import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int fact;
		System.out.println("Enter num1 : ");
		int num1 = sc.nextInt();
		System.out.println("Enter num2 : ");
		int num2 = sc.nextInt();
		for(int i = num1; i <= num2; i++) {
			fact = 1;
			for(int j = 1; j <= i; j++) {
				fact *= j;
			}
			System.out.println("Factorial of " + i + " = " + fact);
		}
	}
}

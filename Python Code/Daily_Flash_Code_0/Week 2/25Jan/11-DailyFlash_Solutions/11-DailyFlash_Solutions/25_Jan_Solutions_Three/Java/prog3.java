import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter num1 : ");
		int num1 = sc.nextInt();
		System.out.println("Enter num2 : ");
		int num2 = sc.nextInt();
		for(int i = num1; i <= num2; i++) {
			System.out.print(i % 2 == 0 ? "\n\nSqr of " + i +  " : " + i * i + "\nCube of " + i + " : " + i * i * i : "");
		}
	}
}

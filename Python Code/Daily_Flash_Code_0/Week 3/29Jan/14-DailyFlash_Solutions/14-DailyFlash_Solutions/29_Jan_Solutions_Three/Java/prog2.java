import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter num : ");
		int num = sc.nextInt();
		System.out.println("Succ = " + (num + 2) + "\nPred = " + (num - 2));
	}
}

import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		System.out.println("Enter num : ");
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		for(int i = 2; i <= num / 2; i++) {
			System.out.print(num % i == 0 ? i + " " : "");
		}
	}
}

import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		System.out.println("Enter num : ");
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		for(int i = 1; i <= num; i++) {
			System.out.println(i % 2 == 1 ? "Cube of " + i + " : " + i * i * i :"");
		}
	}
}

import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		int temp = num, rem, sum = 0;
		while(temp > 0) {
			rem = temp % 10;
			sum += rem;
			temp /= 10;
		}
		System.out.println("Sum : " + sum);
	}
}

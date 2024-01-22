import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int n, sum = 0, num;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		for(int i = 0; i < n; i++) {
			num = sc.nextInt();
			sum += num;
		}
		System.out.println((float)sum / (float)n);
	}
}

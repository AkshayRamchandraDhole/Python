import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int n, sum = 0, num;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		int [] arr = new int[n];
		for(int i = 0; i < n; i++) {
			arr[i] = sc.nextInt();
			sum += arr[i];
		}
		float avg = (float)sum / (float)n;
		sum = 0;
		for(int i = 0; i < n; i++) {
			sum += (avg - arr[i]) * (avg - arr[i]);
		}
		System.out.println((float)sum / n);
	}
}

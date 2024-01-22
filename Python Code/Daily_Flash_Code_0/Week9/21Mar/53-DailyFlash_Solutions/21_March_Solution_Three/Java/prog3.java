import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int num;
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();
		int temp = num, n = 0;
		while(temp != 0) {
		
			temp /= 10;
			n++;
		}
		int [] arr = new int[n];
		int i = 0;
		while(num != 0) {
			arr[i] = num % 10;
			num /= 10;
			i++;
		}
		int sum = 0;
		for(int j = 0; j < n; j++) {
			sum += arr[j];
		}
		System.out.print("sum : " + sum + "\navg : " + (float)sum / n);

	}
}

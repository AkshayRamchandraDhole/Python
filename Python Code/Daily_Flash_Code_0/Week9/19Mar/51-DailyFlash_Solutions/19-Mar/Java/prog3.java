import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int num;
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();
		int rev = 0, n = 0;
		while(num != 0) {
			rev = rev * 10 + num % 10;
			num /= 10;
			n++;
		}
		int [] arr = new int[n];
		int i = 0;
		while(rev != 0) {
			arr[i] = rev % 10;
			rev /= 10;
			i++;
		}
		for(int j = 0; j < n; j++) {
			System.out.print(arr[j]);
		}

	}
}

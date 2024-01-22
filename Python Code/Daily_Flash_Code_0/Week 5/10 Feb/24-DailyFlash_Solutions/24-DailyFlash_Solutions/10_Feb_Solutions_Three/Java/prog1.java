import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int n;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter num : ");
		n = sc.nextInt();
		int sum = 0;
		for(int j = 1; j <= n; j++) {
			sum = 0;
			for(int i = 1; i * i <= j; i++) {
				if(n % i == 0) {
					sum += i;
				}
				if(j / i != i && j % (j / i) == 0) {
					if(i == 1)
						continue;	
					sum += j / i;
				}
			}
			if(sum > j)
				System.out.print(j + " ");
		}
	}
}

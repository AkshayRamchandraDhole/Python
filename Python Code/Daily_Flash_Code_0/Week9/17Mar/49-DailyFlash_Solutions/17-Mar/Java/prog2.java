import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		int num, n1, n2;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter num : ");
		num = sc.nextInt();
		System.out.println("Enter n1 : ");
		n1 = sc.nextInt();
		System.out.println("Enter n2 : ");
		n2 = sc.nextInt();
		int temp = num;
		int cnt = 0;
		while(temp != 0) {
			cnt++;
			if(temp % 10 == n1) {
				num += (n2 - n1) * Math.pow(10, cnt - 1);	
			}
			temp /= 10;
		}
		System.out.println(num);
	}
}

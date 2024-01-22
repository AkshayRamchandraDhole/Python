import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		long num;
		int i = 0;
		System.out.print("Enter num : ");
		Scanner sc = new Scanner(System.in);
		num = sc.nextLong();
		while(num != 0) {
			num = num / 10;
			i++;
		}
		System.out.println("No of digits : " + i);
	}
}

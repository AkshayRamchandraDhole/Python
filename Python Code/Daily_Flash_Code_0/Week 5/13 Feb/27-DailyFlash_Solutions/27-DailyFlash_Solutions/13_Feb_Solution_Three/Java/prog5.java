import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		long num;
		int i = 0, j = 0;
		System.out.print("Enter num : ");
		Scanner sc = new Scanner(System.in);
		num = sc.nextLong();
		while(num != 0) {
			if((num % 10) % 2 == 1)
				i++;
			else
				j++;
			num = num / 10;
		}
		System.out.println("odd : " + i + "\neven : " + j);
	}
}

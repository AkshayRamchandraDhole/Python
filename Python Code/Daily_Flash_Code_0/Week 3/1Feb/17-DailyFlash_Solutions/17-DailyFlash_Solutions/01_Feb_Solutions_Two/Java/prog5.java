import java.util.*;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("num1 : ");
		int num1 = sc.nextInt();
		System.out.println("num2 : ");
		int num2 = sc.nextInt();
		int rem;
		while(true) {
			rem = num1 % num2;
			if(rem == 0) {
				break;
			}
			num1 = num2;
			num2 = rem;
		}
		System.out.println("gcd = " + num2);
	}
}

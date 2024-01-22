import java.util.*;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter inc : ");
		int inc = sc.nextInt();
		int num = 1;
		for(int i = 0; i < 10; i++) {
			System.out.print(num + " ");
			num += inc;
		}
	}
}

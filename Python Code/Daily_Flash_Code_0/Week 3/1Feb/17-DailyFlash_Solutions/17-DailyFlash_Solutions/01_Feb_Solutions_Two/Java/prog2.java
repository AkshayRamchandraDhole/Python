import java.util.*;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("num : ");
		int num = sc.nextInt();
		for(int i = num ; i >= 0; i--) {
			System.out.print(i % 2 == 0 ? i  + " ": "");
		}
	}
}

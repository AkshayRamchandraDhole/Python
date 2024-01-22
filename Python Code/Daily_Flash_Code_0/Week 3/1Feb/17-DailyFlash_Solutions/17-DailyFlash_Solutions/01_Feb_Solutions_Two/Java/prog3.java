import java.util.*;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("hrs : ");
		int hrs = sc.nextInt();
		System.out.println(hrs >= 0 ? "sec : " + hrs * 60 * 60 : "Enter valid det.");
	}
}

import java.util.*;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter mass : ");
		double m = sc.nextDouble();
		System.out.println("Enter velocity : ");
		double v = sc.nextDouble();
		System.out.println(m >= 0 && v >= 0 ? "KE = " + m * v * v / 2 : "Enter vali det.");
	}
}

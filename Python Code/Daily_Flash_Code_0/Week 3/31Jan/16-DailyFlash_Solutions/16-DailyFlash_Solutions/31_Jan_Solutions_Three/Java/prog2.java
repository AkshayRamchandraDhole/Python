import java.util.*;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter rs : ");
		float rs = sc.nextFloat();
		if(rs >= 0) {
			System.out.println("Dollar = " + rs / 71.44);
		} else {
			System.out.println("Enter valild det.");
		}
	}
}

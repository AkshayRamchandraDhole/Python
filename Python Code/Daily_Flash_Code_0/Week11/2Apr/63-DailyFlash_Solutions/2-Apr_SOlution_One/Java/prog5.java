import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		float T;
		Scanner sc = new Scanner(System.in);
		T = sc.nextFloat();
		float l = sc.nextFloat();
		System.out.print("g: ");
		System.out.println((l * T) / (4 * Math.pow(3.14, 4)));
	}
}

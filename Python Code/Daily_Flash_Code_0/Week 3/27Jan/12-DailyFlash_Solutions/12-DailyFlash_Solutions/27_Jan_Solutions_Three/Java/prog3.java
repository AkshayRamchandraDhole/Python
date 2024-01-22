import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter dist : ");
		double dist = sc.nextDouble();
		System.out.println("Enter time : ");
		double time = sc.nextDouble();
		if(dist >= 0 && time >= 0)
			System.out.println("Vel = " + dist/time + " m/s");
		else 
			System.out.println("Enter valid details");
	}
}

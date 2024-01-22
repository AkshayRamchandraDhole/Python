import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Current : ");
		double i = sc.nextDouble();
		System.out.println("Resistance : ");
		double r = sc.nextDouble();
		if(i >= 0 & r >= 0) 
			System.out.println("Volt : " + i * r);
		else
			System.out.println("Enter valid det.");
		
	}
}

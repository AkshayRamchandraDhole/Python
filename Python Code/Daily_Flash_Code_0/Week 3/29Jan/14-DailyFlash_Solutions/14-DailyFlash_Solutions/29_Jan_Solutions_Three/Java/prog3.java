import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter len : ");
		int l = sc.nextInt();
		System.out.print("Enter br : ");
		int b = sc.nextInt();
		if(l >= 0 && b >= 0) 
			System.out.println("Area = " + l * b);
		else 
			System.out.println("Enter valid det.");
	}
}

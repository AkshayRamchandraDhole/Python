import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		System.out.println("Enter octal : ");
		Scanner sc = new Scanner(System.in);
		String arr = sc.next();
		int len = arr.length();
		int i = 0;
		int dec = 0;
		int num;
		while(true) {
			if(i > len - 1)
				break;
			num = arr.charAt(i) - 48;
			dec = dec * 8 + num;
			i++;
		}	
		System.out.println("Decimal : "  + dec);
	}	
}

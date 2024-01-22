import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String hex = sc.next();
		int len = hex.length();
		int k = 0;
		while(k < len) {
			if(!((hex.charAt(k) >= '0' && hex.charAt(k) <= '9') || (hex.charAt(k) >= 'A' && hex.charAt(k) <= 'F'))) {
				System.out.println("Enter correct hex");
				System.exit(1);
			}
			k++;
		}
		int i = 0, num, d = 0;
		while(len > 0) {
			num = hex.charAt(i) - 48 < 10? hex.charAt(i) - 48 : hex.charAt(i) - 55;
			d = d * 16 + num;
			i++;	
			len--;
		}
		System.out.println("Dec = " + d);
	}
}

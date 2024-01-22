import java.util.Scanner;
class Demo {	
	public static void main(String[] args) {
		int [] bin= new int[3];
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter octal num : ");
		String arr = sc.next();
		int n, k, rem;
		int len = arr.length();
		System.out.println("len : " + len);
		for(int i = 0; i < len; i++) {
			n = arr.charAt(i) - 48;
			k = 0;
			bin[2] = 0;
			bin[1] = 0;
			bin[0] = 0;
			while(n != 0) {
				rem = n % 2;
				bin[k] = rem;
				k++;
				n = n / 2;
			}
			System.out.print(bin[2] + "" + bin[1] + "" + bin[0]);	
		}
	}
}

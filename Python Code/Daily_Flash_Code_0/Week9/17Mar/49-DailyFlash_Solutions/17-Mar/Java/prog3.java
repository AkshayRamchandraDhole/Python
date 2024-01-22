import java.util.Scanner;

class Demo {
	static int isAng(int num) {
		int sum = 0, temp = num, rem;
		
		while(temp != 0) {
			rem = temp % 10;
			sum += rem * rem * rem;
			temp /= 10;
		}
		if(sum== num)
			return 1;
		return 0;
	}	
	public static void main(String[] args) {
		int num = 0, f = 0;
		Scanner sc = new Scanner(System.in);
		do {
			if(f != 0)
				System.out.println(num);	
			num = sc.nextInt();
			f = 1;
		} while(isAng(num) != 1);
	}
}

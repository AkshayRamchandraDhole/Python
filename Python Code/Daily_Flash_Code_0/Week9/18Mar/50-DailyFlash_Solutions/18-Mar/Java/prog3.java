import java.util.Scanner;

class Demo {
	static int isStrong(int num) {
		int sum = 0, temp = num, rem, fact;
		
		while(temp != 0) {
			rem = temp % 10;
			fact = 1;
			for(int i =1; i <= rem; i++)
				fact *= i;
			sum += fact;	
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
		} while(isStrong(num) != 1);
	}
}

import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int num, cnt = 0, sqr = 0;
		System.out.print("Enter num : ");
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();
		int temp = num;
		while(temp != 0) {
			temp /= 10;
			cnt++;
		}
		temp = num * num;
		while(cnt != 0) {
			sqr = sqr * 10 + temp % 10;
			temp /= 10;
			cnt--;
		}
		int rev = 0;
		while(sqr != 0) {
			rev = rev * 10 + sqr % 10;
			sqr /= 10;
		}
		if(rev == num)
			System.out.println("Automorphic");
		else 
			System.out.println("No Automorphic");
	}
}	

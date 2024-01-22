import java.util.*;

class Demo {
	public static void main(String[] args) {
		int sum;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter num : ");
		int num = sc.nextInt();
		for(int i = 2; i <= num; i++) {
			sum =  0;
			for(int j = 1; j <= i / 2; j++) {
				if(i % j == 0)
					sum += j;
			}
			if(sum == i)
				System.out.println(i + " ");
		}
	}
}

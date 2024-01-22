import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int num;
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();
		int [] arr = new int[num];
		for(int i = 0; i < num; i++) {
			arr[i] = sc.nextInt();
		}
		int temp = arr[num - 1];
		arr[num - 1] = arr[0];
		arr[0] = temp;
		for(int j = 0; j < num; j++) {
			System.out.print(arr[j]);
		}

	}
}

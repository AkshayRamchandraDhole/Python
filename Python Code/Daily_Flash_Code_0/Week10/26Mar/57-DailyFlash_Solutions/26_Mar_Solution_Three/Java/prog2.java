import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str = sc.next();
		StringBuilder sb = new StringBuilder();
		for(int i = 0; i < str.length(); i++) {
			
			sb.append(Character.toString(str.charAt(str.length() - 1- i)));
		}
		System.out.println(sb);
	}
}

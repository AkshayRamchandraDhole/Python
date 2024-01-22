import java.util.*;

class Demo {
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		String str1 = sc.next();
		String str2 = sc.next();
		int min;
		if(str1.length() > str2.length())
			min = str2.length();
		else
			min = str1.length();
		for(int i = 0; i < min; i++) {
			if(str1.charAt(i) != str2.charAt(i)) {
				System.out.println((int)(str1.charAt(i) - str2.charAt(i)));
				return;
			}
		}
		System.out.println("Equal.");

	}
}

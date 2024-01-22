import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);	
		int asc = 64;
		char ch;
		do {
			ch = sc.next().charAt(0);
			asc++;
		} while(asc == ch);
	}
}

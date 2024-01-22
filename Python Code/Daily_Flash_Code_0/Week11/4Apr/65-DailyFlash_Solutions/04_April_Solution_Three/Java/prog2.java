import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int a = 0, e = 0, i1 = 0, o = 0, u =0;
		Scanner sc = new Scanner(System.in);
		sc.useDelimiter("\n");
		String str = sc.next();
		for(int i = 0; i < str.length(); i++) {
			char ch = str.charAt(i);
			if(ch == 'a')
				a++;
			if(ch == 'e')
				e++;
			if(ch == 'i')
				i1++;
			if(ch == 'o')
				o++;
			if(ch == 'u')
				u++;
		}
		System.out.print("a : " + a + " e: " + e + " i: " + i1 + " o: " + o + " u: " + u);
	}
}

import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		double x1, x2, y1, y2, x3, y3, s, a, b, c, p;
		Scanner sc = new Scanner(System.in);
		System.out.println("(A)Enter x1 : ");
		x1 = sc.nextDouble();
		System.out.println("(A)Enter y1 : ");
		y1 = sc.nextDouble();
		System.out.println("(B)Enter x2 : ");
		x2 = sc.nextDouble();
		System.out.println("(B)Enter y2 : ");
		y2 = sc.nextDouble();
		System.out.println("(C)Enter x3 : ");
		x3 = sc.nextDouble();
		System.out.println("(C)Enter y3 : ");
		y3 = sc.nextDouble();
		a = Math.sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
		b = Math.sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
		c = Math.sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
		p = a + b + c;
		s = p / 2;
		int ch; 
		double area = Math.sqrt(s * (s - a) * (s - b) * (s - c));
		while(true) {
			System.out.println("1.Dist\n2.Perimeter\n3.Area\n4.rad\n5.centre\nEnter ch : ");
			ch = sc.nextInt();
			switch(ch) {
				case 1:
					System.out.println(a + " " + b + " " + c);
					break;
				case 2:
					System.out.println(p);
					break;
				case 3:
					System.out.println(Math.sqrt(s * (s - a) * (s - b) * (s - c)));
					break;
				case 4 :
					System.out.println(area / p);
					break;
				case 5:	
					System.out.println("X = " + (a * x1 + b * x2 + c * x3) / p + "Y = " + (a * y1 + b * y2 + c * y3) / p);
					break;
				default:
					System.out.println("Invalid.");
			}
		}
	}
}

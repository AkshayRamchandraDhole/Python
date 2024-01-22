
import java.io.*;

class Program {

	public static void main(String[] args) throws IOException {

		int choice;
		char ch;
		float x1,y1, x2, y2, x3, y3;
		double peri,x, y, area, p = 0;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("1st point(A)  : \n");
		x1 = Float.parseFloat(br.readLine());
		y1 = Float.parseFloat(br.readLine());
		System.out.printf("2nd point(B)  : \n");
		x2 = Float.parseFloat(br.readLine());
		y2 = Float.parseFloat(br.readLine());
		System.out.printf("1st point(C)  : \n");
		x3 = Float.parseFloat(br.readLine());
		y3 = Float.parseFloat(br.readLine());
		double ab =  Math.sqrt(Math.pow(x2-x1, 2) + Math.pow(y2-y1, 2));
		double bc =  Math.sqrt(Math.pow(x3-x2, 2) + Math.pow(y3-y2, 2));
		double ac =  Math.sqrt(Math.pow(x3-x1, 2) + Math.pow(y3-y1, 2));
		System.out.printf("1: Distances of Each side of Triangle\n");
		System.out.printf("2: Perimeter of Triangle\n");
		System.out.printf("3: Area of Triangle\n");
		System.out.printf("4: Radius of In-Circle\n");
		System.out.printf("5: Centre of In-Circle\n");
		do {
			choice = Integer.parseInt(br.readLine());
			switch(choice) {
				case 1:
					System.out.printf("Distance of line AB : %f\n", ab);
					System.out.printf("Distance of line BC : %f\n", bc);
					System.out.printf("Distance of line AC : %f\n", ac);
					break;
				case 2:
					System.out.printf("Perimeter of Triangle : %f\n", ab + bc + ac);
					break;
				case 3:
					area = Math.sqrt(p*(p-ab)*(p-bc)*(p-ac));
					System.out.printf("Area of Triangle : %f\n", area);
					break;
				case 4:
					p = (ab + bc + ac)/2;
					area = Math.sqrt(p*(p-ab)*(p-bc)*(p-ac));
					System.out.printf("Radius of In-Circle : %f\n", (area / p));
					break;
				case 5:
					peri = ab + bc + ac;
					x = ((bc * x1) + (ac * x2) + (ab * x3))/peri;
					y = ((bc * y1) + (ac * y2) + (ab * y3))/peri;
					System.out.printf("Centre of In-Circle : (%f, %f)\n", x,y);
					break;
				default:
					System.out.printf("Enter Correct Choice\n");
					break;
			}
			System.out.printf("Do you want to continue ? ");
			ch = (char)br.read();
		}while(ch == 'y' || ch == '\n');
	}
}
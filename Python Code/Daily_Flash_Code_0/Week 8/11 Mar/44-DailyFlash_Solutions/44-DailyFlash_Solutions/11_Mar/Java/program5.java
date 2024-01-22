
import java.io.*;

class Program {

	public static void main(String[] args) throws IOException {

		float x1,y1, x2, y2, x3, y3;
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
		System.out.printf("Distance of Line AB: %f\n", Math.sqrt(Math.pow(x2-x1, 2) + Math.pow(y2-y1, 2)));
		System.out.printf("Distance of Line BC: %f\n", Math.sqrt(Math.pow(x2-x3, 2) + Math.pow(y2-y3, 2)));
		System.out.printf("Distance of Line AC: %f\n", Math.sqrt(Math.pow(x3-x1, 2) + Math.pow(y3-y1, 2)));
	}
}

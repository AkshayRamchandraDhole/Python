import java.io.*;

class Program0 {


	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int deg = 0;
		System.out.printf("Enter Angles in degrees\n");
		deg = Integer.parseInt(br.readLine());

		System.out.printf("%d Degrees = %.4f Radians\n",deg,(3.142*deg)/180);
	}
}

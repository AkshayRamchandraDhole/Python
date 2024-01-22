import java.io.*;

class Template {
	public static void main(String[] args) throws IOException {
		
		float n = 0;
		System.out.printf("Rupees : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		try {
			n = Float.parseFloat(br.readLine());
		}catch(NumberFormatException nf){
			System.exit(0);
		}
		System.out.printf("Dollars : %f\n", n * 0.014);
	}
}

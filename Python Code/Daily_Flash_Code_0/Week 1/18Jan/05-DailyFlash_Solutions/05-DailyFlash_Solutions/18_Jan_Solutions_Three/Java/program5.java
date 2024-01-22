import java.io.*;

class Thrashing {
	public static void main(String ... kbd) throws IOException {

		int a = 0;
		System.out.printf("Enter Size : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		try {
			a = Integer.parseInt(br.readLine());
		}
		catch (NumberFormatException ne){
			System.out.printf("Not a Number\n");
		}

		if(a < 0) 
			System.exit(0);
		
		int s = a * a;
		for(int i = 1; i <= s; i++){
			if(i % a == 0) {
				System.out.printf("0\n");
			}
			else{
				System.out.printf("0 ");
			}
		}
	}
}
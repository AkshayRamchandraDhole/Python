
import java.io.*;

class Home {
	public static void main(String[] args) throws IOException{
		
		int n;
		System.out.printf("Enter Hrs : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		try{
			n = Integer.parseInt(br.readLine());
		}
		catch(NumberFormatException ne){
			return;
		}
		if(n < 0)
			return;
		System.out.printf("%d seconds\n", n * 60 * 60);
	}
}

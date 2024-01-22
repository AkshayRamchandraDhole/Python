
import java.io.*;

class Home {
	public static void main(String[] args) throws IOException{
		
		int n;
		System.out.printf("Enter Size : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		try{
			n = Integer.parseInt(br.readLine());
		}
		catch(NumberFormatException ne){
			return;
		}
		if(n < 0)
			return;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n - i + 1; j++){
				System.out.printf("%c ", ((j%2==1)? '+':'='));
			}
			System.out.printf("\n");
		}
	}
}
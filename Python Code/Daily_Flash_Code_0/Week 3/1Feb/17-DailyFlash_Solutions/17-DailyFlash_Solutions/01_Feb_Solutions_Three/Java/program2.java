
import java.io.*;

class Home {
	public static void main(String[] args) throws IOException{
		
		int n;
		System.out.printf("Enter Limit : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		try{
			n = Integer.parseInt(br.readLine());
		}
		catch(NumberFormatException ne){
			return;
		}
		if(n < 0)
			return;
		for(int i = n; i >= 0; i--){
			if(i %2 != 1)
				System.out.printf("%d ", i);
		}
		System.out.printf("\n");
	}
}
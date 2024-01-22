import java.io.*;

class Pargaon {

	public static void main(String[] args) throws IOException{
		

		int n = 0, flag	;
		System.out.printf("Enter Size : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		try {
			n = Integer.parseInt(br.readLine());
		}
		catch(NumberFormatException e){
			System.exit(0);
		}	
		if(n < 0){
			System.exit(0);
		}
		flag = 1;
		for(int i = n; i >=0 ; i--) {
			for(int j = i; j <= n; j++) {
				System.out.printf("%d\t",j);
				flag++;

			}
			System.out.printf("\n");
		}
	}
}
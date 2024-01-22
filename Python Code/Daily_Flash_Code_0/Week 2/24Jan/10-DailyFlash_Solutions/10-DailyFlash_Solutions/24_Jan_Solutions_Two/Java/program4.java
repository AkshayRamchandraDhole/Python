import java.io.*;

class Process0 {
	
	public static void main(String[] args) throws IOException{
		
		int n = 0,flag;
		System.out.printf("Enter Size : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		try{
			n = Integer.parseInt(br.readLine());
		}
		catch (NumberFormatException e) {
			System.out.printf("Invalid\n");
		}

		if(n < 0){
			System.exit(0);
		}
		flag = 1;
		for(int i = n; i >=1 ; i--) {
			flag = (flag == 1)?0:1;
			for(int j = 1; j <= n-i+1; j++) {
				System.out.printf("%d ",flag);

			}
			System.out.printf("\n");
		}
	}
}

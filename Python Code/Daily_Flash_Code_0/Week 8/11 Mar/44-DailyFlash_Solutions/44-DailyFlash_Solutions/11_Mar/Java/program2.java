import java.io.*;

class Program {
	public static void main(String ... kanif) throws IOException{

		int n,k;
		System.out.printf("Enter Number : \n");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		k = Integer.parseInt(br.readLine());
		for(int i = 1; i<=k; i++){
			n = i;
			while(n != 0){
				if(n%10 == 0) {
					System.out.printf("%d ", n);
					break;
				}
				n = n / 10;
			}
		}
		System.out.println();
	}
}

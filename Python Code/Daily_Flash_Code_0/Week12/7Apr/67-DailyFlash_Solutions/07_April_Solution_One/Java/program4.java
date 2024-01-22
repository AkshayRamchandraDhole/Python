import java.io.*;
class Program {

	public static void main(String[] args) throws IOException{
		int n, k = 0;
		System.out.printf("Enter Limit : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n*2 - 1; j++){
				if(j > n-i && j < n+i){
					System.out.printf("%d\t", ((j%2 == 0)?1:0));
				}
				else{
					System.out.printf("\t");
				}
			}
			System.out.printf("\n");
		}
	}
}

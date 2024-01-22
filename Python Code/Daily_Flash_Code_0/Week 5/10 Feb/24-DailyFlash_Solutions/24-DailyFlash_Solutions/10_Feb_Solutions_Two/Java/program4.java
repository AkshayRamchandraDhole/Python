import java.io.*;
	
class Program {
	public static void main(String[] args) throws IOException{

		int n;
		System.out.printf("Enter size: ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());

		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(j < (n-i-1)){
					System.out.printf("\t");
				}
				else
					System.out.printf("%d\t", (j != (n-i-1))?(j*(j+i)):(3));
			}
			System.out.printf("\n");
		}
	}
}
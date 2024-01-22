
import java.io.*;
class Program {

	public static void main(String[] args) throws IOException{
	
		int n, sum = 0, c = 0;
		System.out.printf("Enter Size: ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());

		for(int i = 1; i <= n; i++){
			for(int j = n; j >= 1 ; j--){
				if(j > i){
					System.out.printf("\t");
				}
				else{
					System.out.printf("%c\t",(64+j));
				}
			}
			System.out.printf("\n");
		}	
	}
}
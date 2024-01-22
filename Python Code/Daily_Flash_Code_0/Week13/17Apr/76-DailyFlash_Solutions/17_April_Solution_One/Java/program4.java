import java.io.*;

class Program {
	public static void main(String[] args) throws IOException{
		int n;
		System.out.printf("Enter Limit : ");
		InputStreamReader inp = new InputStreamReader(System.in);
		BufferedReader br =  new BufferedReader(inp);
		n = Integer.parseInt(br.readLine());

		for(int i = 1; i < 2*n; i++){
			for(int j = 1; j < n*2; j++){
				if(i==j || j == (2*n-i)){
					System.out.print("X\t");
				}
				else
					System.out.print("\t");
			}
			System.out.printf("\n");
		}
	}
}

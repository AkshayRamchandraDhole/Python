import java.io.*;
class Program {
		
	public static void main(String[] args) throws IOException{

		int m,n;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Row and Column : ");
		m = Integer.parseInt(br.readLine());
		n = Integer.parseInt(br.readLine());
		int arr[][] = new int[m][n];
		for(int i = 0 ; i < m ; i++){
			for(int j = 0 ; j < n ; j++){
				arr[i][j] = Integer.parseInt(br.readLine());
			}
		}

		for(int i = 0 ; i < m ; i++){
			for(int j = 0 ; j < n ; j++){
				if(i==j)
					System.out.printf("%d ", arr[i][j]);	
			}
		}
		System.out.printf("\n");
	}
}

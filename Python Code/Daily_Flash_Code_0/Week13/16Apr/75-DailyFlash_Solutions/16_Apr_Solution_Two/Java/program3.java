import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {

		int m = 3,n = 3,sum = 0;
		System.out.printf("Row and Column : \n");
		InputStreamReader inp = new InputStreamReader(System.in);
		BufferedReader br =  new BufferedReader(inp);
		//m = Integer.parseInt(br.readLine());
		//n = Integer.parseInt(br.readLine());
	
		int matrix[][] = new int[m][n];
	
		System.out.printf("Enter Matrix 1 : \n");
		for(int i = 0 ; i < m ; i++){
			for(int j = 0 ; j < n ; j++){
				matrix[i][j] = Integer.parseInt(br.readLine());
			}
		}
		for (int i = 0; i < n; i++){
			matrix[0][i] = 2 * matrix[0][i] + 3 * matrix[1][i];
			matrix[1][i] = 2 * matrix[1][i] - matrix[2][i];
			matrix[2][i] = 4 * matrix[2][i];
		}

		System.out.println("Matrix : ");
		for(int i = 0 ; i < m ; i++){
			for(int j = 0 ; j < n ; j++){
				System.out.print(matrix[i][j] + " ");
			}
			System.out.println();
		}
	}

}

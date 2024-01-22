import java.io.*;
class Program {
		
	public static void main(String[] args) throws IOException{

		int m,n;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Row and Column : ");
		m = Integer.parseInt(br.readLine());
		n = Integer.parseInt(br.readLine());
		if(m!=n)
			return;
		int arr[][] = new int[m][n];
		int sum = 0, max = -1;
		for(int i = 0 ; i < m ; i++){
			for(int j = 0 ; j < n ; j++){
				arr[i][j] = Integer.parseInt(br.readLine());
				if(i==j && arr[i][j] != 1){
					System.out.printf("Not Identity Matrix\n");
					return;
				}
				else if(arr[i][j] != 0 && i != j){
					System.out.printf("Not Identity Matrix\n");
					return;
				}
			}
		}
		System.out.println("Identity Matrix");
	}
}

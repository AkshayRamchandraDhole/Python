import java.io.*;
class Program {
		
	public static void main(String[] args) throws IOException{

		int m,n;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Row and Column : ");
		m = Integer.parseInt(br.readLine());
		n = Integer.parseInt(br.readLine());
		int arr[][] = new int[m][n];
		int sum = 0, max = -1;
		for(int i = 0 ; i < m ; i++){
			for(int j = 0 ; j < n ; j++){
				arr[i][j] = Integer.parseInt(br.readLine());
				if(max < arr[i][j] && arr[i][j] % 2==1){
					max = arr[i][j];
				}
				else if(arr[i][j] % 2==0){
					sum += arr[i][j];
				}
			}
		}
		System.out.println(sum*max);
	}
}

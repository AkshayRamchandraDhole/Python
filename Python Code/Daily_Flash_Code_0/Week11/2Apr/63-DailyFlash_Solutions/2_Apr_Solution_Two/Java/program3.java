
import java.io.*;

class Program {
	void merge(int arr[], int p, int r) {

		int ind;
		for(int i = p; i < r; i++){
			ind = i;
			for(int j = i; j <= r; j++){
				if(arr[ind] < arr[j]){
					ind = j;
				}
			}
			arr[ind] = arr[ind] + arr[i] - (arr[i] = arr[ind]);
		}
	}

	public static void main (String ... k) throws IOException {
		
		int n;
		System.out.printf("Enter Length Of Array : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());

		int []arr = new int[n];

		for(int i = 0 ; i < n ; i++ ){
			arr[i] = Integer.parseInt(br.readLine());
		}

		System.out.printf("Array : \n");
		for(int i = 0 ; i < n ; i++ ){
			System.out.printf("%d ", arr[i]);
		}
		System.out.printf("\n");
		new Program().merge(arr, 0, n-1);

		System.out.printf("Sorted Array : \n");
		for(int i = 0 ; i < n ; i++ ){
			System.out.printf("%d ", arr[i]);
		}
		System.out.printf("\n");
	}
}

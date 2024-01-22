
import java.io.*;

class Program {

	public static void main(String[] args) throws IOException {
		int n,t;
		float sum = 0,var = 0;
		System.out.printf("Total Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		t = Integer.parseInt(br.readLine());
		int arr[] = new int[t];

		System.out.printf("Enter Numbers : ");
		for(int i = 1; i <= t; i++) {
			n = Integer.parseInt(br.readLine());
			arr[i] = n;
			sum = sum + n;
		}
		sum = sum / t;
		for(int i = 0; i< t; i++){
			var = var + (int)Math.pow(arr[i] - (int)(sum),2);	
		}
		System.out.printf("Variance = %f\n", var /t);
	}
}
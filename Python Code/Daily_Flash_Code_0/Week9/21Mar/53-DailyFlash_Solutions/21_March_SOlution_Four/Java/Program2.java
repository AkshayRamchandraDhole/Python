import java.io.*;

class Program2 {


	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int sum = 0;
		int l = 0;
		System.out.printf("Enter Number of Elements\n");

		l = Integer.parseInt(br.readLine());
		int arr[] = new int[l];

		for(int i = 0; i < l; i++){
			arr[i] = Integer.parseInt(br.readLine());
			sum+=arr[i];
		}

		System.out.println("Sum of Elements = "+sum);
		System.out.println("Average of Elements = "+String.format("%.2f",((float)sum/l)));
	}
}

import java.io.*;

class Program2 {


	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int l = 0;
		System.out.printf("Enter Number of Elements\n");

		l = Integer.parseInt(br.readLine());
		int arr[] = new int[l];

		System.out.printf("Enter Array Elements\n");
		for(int i = 0; i < l; i++){
			arr[i] = Integer.parseInt(br.readLine());
		}
		
		int temp = arr[0];
		arr[0] = arr[l-1];
		arr[l-1] = temp;
	
		System.out.println("After Swapping array elements are");
		for(int i = 0; i < l; i++)
		System.out.printf("%d\n",arr[i]);

	}
}

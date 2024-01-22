import java.io.*;
class Program {
	public static void main(String[] args) throws IOException{
		int n;
		System.out.printf("Enter length  of Array : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());

		int arr[] = new int[n];
		for(int i =  0; i < n ; i++){
			arr[i] = Integer.parseInt(br.readLine());
		}

		System.out.println("Before : ");
		for(int i =  0; i < n ; i++){
			System.out.print(arr[i] + " ");
		}
		arr[n-1] = arr[0] +  arr[n-1] - (arr[0] = arr[n-1]);
		System.out.println("\nAfter");
		for(int i =  0; i < n ; i++){
			System.out.print(arr[i] + " ");
		}
		System.out.println();
	}
}

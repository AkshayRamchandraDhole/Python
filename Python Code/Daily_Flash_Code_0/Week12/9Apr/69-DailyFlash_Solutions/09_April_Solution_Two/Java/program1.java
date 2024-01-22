
import java.io.*;

class Program {
	public static void main (String ... kanif ) throws IOException{

		int n;
		System.out.printf("Enter length of Array : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		int []arr = new int[n];
		int []k = new int[n];
		System.out.println("Array 1 : ");
		for(int i = 0; i < n ; i++){
			arr[i] = Integer.parseInt(br.readLine());
		}
		System.out.println("Array 2 : ");
		for(int i = 0; i < n ; i++){
			k[i] = Integer.parseInt(br.readLine());
			k[i] = k[i] - arr[i];
		}
		System.out.printf("Subtraction of Elements: \n");
		for(int i = 0; i < n ; i++){
			if(k[i] < 0)
				k[i] = -1*k[i];
			System.out.printf("%d ",k[i]);
		}
		System.out.printf("\n");
	}
}

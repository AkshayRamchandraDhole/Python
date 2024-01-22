import java.io.*;

class Program {
	public static void main(String[] args) throws IOException{
		
		
		int n;
		System.out.printf("Enter length of Array : ");
		InputStreamReader inp = new InputStreamReader(System.in);
		BufferedReader br =  new BufferedReader(inp);
		n = Integer.parseInt(br.readLine());

		int []arr = new int[n];
		int k[] = new int[n];

		System.out.printf("Array 1 : \n");
		for(int i = 0; i < n ; i++){
			arr[i] = Integer.parseInt(br.readLine());			
		}
		System.out.printf("Array 2 : \n");
		for(int i = 0; i < n ; i++){
			k[i] = Integer.parseInt(br.readLine());			
		}
		int []temp = new int[2*n];
		for(int i = n; i < 2*n ; i++){
			temp[i] = k[i-n];
		}
		for(int i = 0; i < n ; i++){
			temp[i] = arr[i];
		}

		for(int i = 1; i < 2*n; i++){
			for (int j = 0; j < i; j++){
				if(temp[j] == temp[i]){
					temp[i] = 0;
					break;
				}
			}
		}

		System.out.printf("Array After concatenation and Replacing: \n");
		for(int i = 0; i < 2*n ; i++){
			System.out.printf("%d ", temp[i]);
		}
		System.out.printf("\n");

		
	}
}

import  java.io.*;

class Program {
	public static void main(String ... kanif) throws IOException { 

		int n;
		System.out.printf("Enter Length of Array : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		int arr[] = new int[n];
		int cnt = 0;
		int sum = 0;
		while(cnt != n ){
			arr[cnt] = Integer.parseInt(br.readLine());
			sum = sum + arr[cnt];
			cnt++;
		}
		System.out.println("Sum : " + sum);
		System.out.println("Avg : " + (float)(sum)/n);
	}
}

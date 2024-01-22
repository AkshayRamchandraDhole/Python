import  java.io.*;

class Program {
	public static void main(String ... kanif) throws IOException { 

		int n;
		System.out.printf("Enter Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		int temp = n, cnt = 0;
		while(n != 0){
			cnt++;
			n = n / 10;
		}
		int arr[] = new int[cnt];
		cnt = 0;
		while(temp != 0 ){
			arr[cnt] = temp % 10;
			temp = temp  / 10;
			cnt++;
		}
		for(int i = 0; i < cnt; i++){
			System.out.printf("%d ", arr[i]);
		}
		System.out.printf("\n");
	}
}

import java.io.*;

class Program {
	int isPali(int n) {
		int rev = 0, temp = n;
		while(n!=0){
			rev = rev * 10 + n%10;
			n /= 10;
		}	
		if(temp == rev)
			return 1;
		else
			return 0;
	}

	public static void main(String ... kanif) throws IOException{
		int n;
		Program p = new Program();
		System.out.printf("Enter length of Array : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));	
		n = Integer.parseInt(br.readLine());
		int []arr = new int[n];
		for(int i = 0; i < n ; i++){
			arr[i] = Integer.parseInt(br.readLine());
		}
		for(int i = 0; i < n ; i++){
			if(p.isPali(arr[i]) == 1){
				System.out.printf("%d ", arr[i]);
			}
		}	
		System.out.printf("\n");
		}
	}


import java.io.*;

class Program {
	public static void main (String ... kanif ) throws IOException{

		int n;
		double avg,sum = 0,var,sd;
		System.out.printf("Enter length of Array : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		int []arr = new int[n];
		for(int i = 0; i < n ; i++){
			arr[i] = Integer.parseInt(br.readLine());
			sum += arr[i];
		}
		avg = sum/n;
		sum = 0;
		for(int i = 0; i < n ; i++){
			sum += (arr[i]-avg)*(arr[i]-avg);
		}	
		var = sum/n;
		sd = Math.sqrt(var);
		System.out.printf("Avg : %f\n",avg);
		System.out.printf("Var : %f\n",var);
		System.out.printf("SD : %f\n",sd);
		
	}
}
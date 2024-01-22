import java.io.*;
class Program {
	static float pie = 3.142f;
	public static void main(String[] args) throws IOException{
		int n;
		float mul = 0;
		System.out.printf("Enter Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		System.out.printf("Enter x and y : ");
		int x = Integer.parseInt(br.readLine());
		int y = Integer.parseInt(br.readLine());
		int cnt = 1;
		while(cnt <= n){
			mul = mul + (float)(cnt/Math.pow((x+y), cnt));
			cnt++;
		}
		System.out.printf("%f\n",mul);
	}
}

import java.io.*;
class Program {
	
	static int fact(int n){
		if(n==0)
			return 1;
		else
			return n*fact(n-1);
	}

	public static void main(String[] args) throws IOException{

		int r,n;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("N and R: ");
		n = Integer.parseInt(br.readLine());
		r = Integer.parseInt(br.readLine());
		int per = fact(n)/(fact(r)*fact(n-r));
		System.out.printf("To pick %d items from s set of %d items there are %d possible ways.\n", r,n,per);
	}
}

import java.io.*;
class Program {
	static float pie = 3.142f;
	public static void main(String[] args) throws IOException{
		System.out.printf("Enter Any String : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String n = br.readLine();
		char []arr = n.toCharArray();
		System.out.println(n.length());
		int k = arr.length;
		char c;
		for(int i = 0; i < k/2; i++){
			c = arr[i];
			arr[i] =  arr[k - i - 1];
			arr[k - i - 1] = c;
		}
		n = new String(arr);	
		System.out.println(n);
	}
}

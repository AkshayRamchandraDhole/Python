import java.io.*;
class Program {
	static float pie = 3.142f;
	public static void main(String[] args) throws IOException{
		System.out.printf("Enter Any String : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String n = br.readLine();
		String words[] = n.split(" ");
		int min = words[0].length(), k = 0;
		for(int i = 0; i < words.length; i++){
			if(min > words[i].length()){
				min = words[i].length();
				k = i;
			}
		}
		System.out.println(words[k]);
	}
}

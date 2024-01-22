import java.io.*;
class Program {
	static float pie = 3.142f;
	public static void main(String[] args) throws IOException{
		int cnt = 0,a, e, k, o, u;
		a = e = k = o = u = 0;;
		char ch;
		System.out.printf("Enter Any String : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String n = br.readLine();
		for(int i = 0; i < n.length(); i++){
			ch = n.charAt(i);
			if(ch == 'A' || ch == 'a'){
				a++;
			}
			else if(ch == 'E' || ch == 'e'){
				e++;
			}
			else if(ch == 'I' || ch == 'i'){
				k++;
			}
			else if(ch == 'O' || ch == 'o'){
				o++;
			}
			else if(ch == 'u' || ch == 'U'){
				u++;
			}
		}
		System.out.printf("a : %d\n",a);
		System.out.printf("e : %d\n",e);
		System.out.printf("i : %d\n",k);
		System.out.printf("o : %d\n",o);
		System.out.printf("u : %d\n",u);
	}
}

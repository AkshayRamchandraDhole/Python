
import java.io.*;
class Program {
	void display(char bin[]){
		int i = bin.length-1;
		while(i>=0){
			System.out.printf("%c",bin[i]);
			i--;
		}
		System.out.printf("\n");
		
	}
	public static void main(String[] args) throws IOException{

		int n,i,cnt = 0, c=0;
		System.out.printf("Enter Octal Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		cnt = n;
		while(cnt!=0){
			cnt = cnt/10;

			c++;
		}
		char bin[] = new char[c*3];
		cnt = 0;
		c = 0;
		while(n != 0){
			if(n%10 >= 8){
				System.out.printf("Not a octal Number\n");
				System.exit(0);
			}
			i = n % 10;
			c = 0;
			while(c < 3){
				bin[cnt] = (char)(i%2 + 48);
				i = i / 2;
				cnt++;
				c++;
			}
			n = n / 10;
		}	
		new Program().display(bin);
	}
}
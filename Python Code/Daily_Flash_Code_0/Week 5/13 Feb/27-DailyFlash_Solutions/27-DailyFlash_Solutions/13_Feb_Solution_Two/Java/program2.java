
import java.io.*;
class Program {
	public static void main(String[] args) throws IOException{
		String num;
		int i =  0, dec = 0;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter hexadecimal Number\n");
		num = br.readLine();
		while(i < num.length()){
			if(num.charAt(i)>'F'){
				System.out.printf("Not a hexadecimal Number\n");
				System.exit(0);
			}
			dec = dec * 16 + ((num.charAt(i) <= '9')?(num.charAt(i)-'0'):(num.charAt(i)-55));
			i++;
		}
		System.out.printf("%d\n",dec);
	}

}
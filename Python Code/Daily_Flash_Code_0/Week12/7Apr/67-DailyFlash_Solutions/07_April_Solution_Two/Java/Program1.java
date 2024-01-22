import java.io.*;
import java.util.*;

class StringRead{


	public static void main(String ... nk)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the String : ");
		String s = br.readLine();

		String v = "AEIOUaeiou";

		System.out.printf("Consecutive Vowels are\n");

		for(int i = 0; i < s.length(); i++){
			for(int j = 0; j < v.length(); j++){
				if(s.charAt(i) == v.charAt(j) && s.charAt(i+1) == v.charAt(j+1))
					System.out.printf("%c%c\n",s.charAt(i),s.charAt(i+1));



			}
		}
	}
}

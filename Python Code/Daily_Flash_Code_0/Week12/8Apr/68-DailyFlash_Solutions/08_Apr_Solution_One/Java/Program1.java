import java.io.*;
import java.util.*;

class StringRead{


	public static void main(String ... nk)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the String : ");
		String s = br.readLine();

		System.out.println("Enter the Sub-String : ");
		String v = br.readLine();

		int l = v.length();
		for(int i = 0; i < (s.length() - v.length()+1); i++){
		

			if(v.matches(s.substring(i,(i+l)))){
	
				System.out.println("The Sub String is Present in the given String");
			}
		}

	}
}

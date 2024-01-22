import java.io.*;
import java.util.*;

class StringRead{


	public static void main(String ... nk)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the String : ");
		String s = br.readLine();
		int vow[] = new int[11];	

		String v = "AEIOUaeiou";

		for(int i = 0; i < s.length(); i++)
			for(int j = 0; j < v.length(); j++)
				if(s.charAt(i) == v.charAt(j))
					vow[j]++;

		for(int lc = 0; lc < 10; lc++){

			if(vow[lc] != 0)	
				System.out.printf("%c = %d\t",v.charAt(lc),vow[lc]);
		}

		System.out.println();

	}
}

import java.io.*;

class Program1 {


	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.printf("Enter A String 1\n");
		String str1 = new String(br.readLine());

		System.out.printf("Enter A String 2\n");
		String str2 = new String(br.readLine());

		if(str1.length() != str2.length()){

			System.out.println("Strings are Unequal");
		}
		else{

			int cmp = 0;

			for(int i = 0; i < str1.length(); i++){

				if(str1.charAt(i) != str2.charAt(i)){

					cmp = str1.charAt(i) - str2.charAt(i);
					break;
				}
			}

			if(cmp == 0){

				System.out.println("Strings are equal");
			}
			else {

				System.out.println("Strings are Unequal and Differ by "+cmp);
			}


		}

	}
}

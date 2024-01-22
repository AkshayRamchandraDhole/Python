import java.io.*;

class Thrashing {
	public static void main(String ... kbd) throws IOException {

		int k = 1, m = 1;
		
		while(k <= 50){
			if(m % 2 == 1)
				System.out.printf("%d ", m);
		
			m+=2;
			k++;
		}
		System.out.printf("\n");
	}
}

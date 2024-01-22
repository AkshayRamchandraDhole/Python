import java.io.*;
import java.util.*;

class ArrayOps{

	public static void main(String ... args)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter order of Martix : ");
		int n = Integer.parseInt(br.readLine());

		int matrix[][] = new int[n][n];



	for(int i=0; i<n; i++){

		System.out.println("Enter Elements For Row "+i);
		for(int j=0; j<n; j++)
			matrix[i][j] = Integer.parseInt(br.readLine());
	}


	System.out.println("Upper Triangular Matrix : ");
	for(int i=0; i<n; i++){		
		for(int j=0; j<n; j++){

			if(i <= j)
				System.out.printf("%d\t",matrix[i][j]);
			else{

				matrix[i][j] = 0;
				System.out.printf("%d\t",matrix[i][j]);
			}
		}
		System.out.printf("\n");		
	}

	
	}
}

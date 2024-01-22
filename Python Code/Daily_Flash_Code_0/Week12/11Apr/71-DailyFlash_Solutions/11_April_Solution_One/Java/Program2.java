import java.io.*;
import java.util.*;

class ArrayOps{

	public static void main(String ... args)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter No of Rows of array : ");
		int n = Integer.parseInt(br.readLine());

		System.out.println("Enter No of Columns of array : ");
		int m = Integer.parseInt(br.readLine());

		int arr1[][] = new int[n][m];
		int trr1[][] = new int[m][n];


	for(int i=0; i<n; i++){

		System.out.println("Enter Elements For Row "+i);
		for(int j=0; j<m; j++)
			arr1[i][j] = Integer.parseInt(br.readLine());
	}


	System.out.println("Transpose Matrix ");
	for(int i=0; i<m; i++){		
		for(int j=0; j<n; j++){

			trr1[i][j] = arr1[j][i];
			System.out.printf("%d\t",trr1[i][j]);
		}
		System.out.printf("\n");		
	}

	
	}
}

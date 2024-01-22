import java.io.*;
import java.util.*;

class ArrayOps{

	public static void main(String ... args)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter Number of Rows : ");
		int m = Integer.parseInt(br.readLine());

		System.out.println("Enter Number of Columns : ");
		int n = Integer.parseInt(br.readLine());

		int matrix[][] = new int[m][n];
		int rows[] = new int[m];
		int cols[] = new int[n];

		int sum = 0;

	for(int i=0; i<n; i++){

		System.out.println("Enter Elements For Row "+i);
		for(int j=0; j<n; j++)
			matrix[i][j] = Integer.parseInt(br.readLine());
	}


	//Operation 1 2R1+3R2

	for(int i = 0;i < m; i++){

		matrix[0][i] = 2*(matrix[0][i]) + 3*(matrix[1][i]);
	}

	//Operation 2 2R2 - R3

	for(int i = 0;i < m; i++){

		matrix[1][i] = 2*(matrix[1][i]) - matrix[2][i];
	}


	//Operation 3 2R2 - R3

	for(int i = 0;i < m; i++){

		matrix[2][i] = 4*(matrix[2][i]);
	}

for(int i=0; i<n; i++){


		for(int j=0; j<n; j++)
			System.out.print(matrix[i][j]+"\t");
		System.out.println();
	}



	
	}
}

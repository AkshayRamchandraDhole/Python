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


	//Operation 1 2C1+C2

	for(int i = 0;i < m; i++){

		matrix[i][0] = 2*(matrix[i][0]) + (matrix[i][1]);
	}

	//Operation 2 3C2 - C1

	for(int i = 0;i < m; i++){

		matrix[i][1] = 3*(matrix[i][1]) - matrix[i][0];
	}


	//Operation 3 3C3

	for(int i = 0;i < m; i++){

		matrix[i][2] = 3*(matrix[i][2]);
	}

for(int i=0; i<n; i++){


		for(int j=0; j<n; j++)
			System.out.print(matrix[i][j]+"\t");
		System.out.println();
	}



	
	}
}

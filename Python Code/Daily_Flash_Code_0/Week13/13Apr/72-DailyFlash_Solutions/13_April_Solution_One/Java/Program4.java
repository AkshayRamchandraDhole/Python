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


	int x=(matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]));
int y=(matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]));
int z=(matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]));

int det = x-y+z;

	System.out.printf("Determinant of  Matrix : %d\n",det);

	
	}
}

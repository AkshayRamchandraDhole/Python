import java.io.*;
import java.util.*;

class ArrayOps{

	public static void main(String ... args)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter No of Rows of array : ");
		int m = Integer.parseInt(br.readLine());

		System.out.println("Enter No of Columns of array : ");
		int n = Integer.parseInt(br.readLine());

		int arr1[][] = new int[m][n];


	for(int i=0; i<m; i++){

		System.out.println("Enter Elements For Row "+i);
		for(int j=0; j<n; j++)
			arr1[i][j] = Integer.parseInt(br.readLine());
	}

	int max = arr1[0][0];
	int sum = 0;

	for(int i=0; i<m; i++){
			
		for(int j=0; j<n; j++)
			if(arr1[i][j]%2 == 0)	
				sum +=arr1[i][j];
			else if(max <  arr1[i][j])
				max = arr1[i][j];
	}

		System.out.printf("Product of Sum of Even Elements of Array and Max Odd Numbers = %d\n",max*sum);
	
	}
}

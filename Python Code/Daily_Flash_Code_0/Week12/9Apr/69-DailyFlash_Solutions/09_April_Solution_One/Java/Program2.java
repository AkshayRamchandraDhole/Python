import java.io.*;
import java.util.*;

class ArrayOps{

	public static void main(String ... args)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter No of Rows of array : ");
		int n = Integer.parseInt(br.readLine());

		int arr1[][] = new int[n][n];


	for(int i=0; i<n; i++){

		System.out.println("Enter Elements For Row "+i);
		for(int j=0; j<n; j++)
			arr1[i][j] = Integer.parseInt(br.readLine());
	}

	boolean flag = false;

	for(int i=0; i<n; i++){
			
		for(int j=0; j<n; j++)
			if(i ==j && arr1[i][j] == 1)	
				flag = true;
			else if(arr1[i][j] == 0)
				flag = true;
			else
				flag = false;
	}

	if(flag){

		System.out.printf("Identity Matrix\n");
	}

	
	}
}

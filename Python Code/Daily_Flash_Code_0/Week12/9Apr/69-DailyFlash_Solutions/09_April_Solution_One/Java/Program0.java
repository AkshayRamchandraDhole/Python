import java.io.*;
import java.util.*;

class ArrayOps{

	public static void main(String ... args)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter No of Elements : ");
		int m = Integer.parseInt(br.readLine());

		int arr1[] = new int[m];
		int arr2[] = new int[m];


	System.out.println("Enter Elements For Array 1");
	for(int i=0; i<m; i++){

		arr1[i] = Integer.parseInt(br.readLine());
	}

	System.out.println("Enter Elements For Array 2");
	for(int i=0; i<m; i++){

		arr2[i] = Integer.parseInt(br.readLine());
	}

	System.out.println("Subtraction is ");
	for(int i=0; i<m; i++){
			
		int sub = arr1[i] - arr2[i];
			if(sub < 0)	
				sub*=-1;
			System.out.printf("%d\t",sub);
			
	}		
	
	}
}

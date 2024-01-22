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

	int min1 = arr1[0];
	int min2 = arr1[0];

	for(int i=0; i<m; i++){
			
		if(arr1[i] > min1){
			min2 = min1;
			min1 = arr1[i];
		}
		else if(arr1[i] > min2){
			min2 = arr1[i];
		}

		if(arr2[i] > min1){
			min2 = min1;
			min1 = arr2[i];
		}
		else if(arr2[i] > min2){
			min2 = arr2[i];
		}
	
	}

	System.out.printf("Second Largest Number %d\n",min2);
	
	}
}

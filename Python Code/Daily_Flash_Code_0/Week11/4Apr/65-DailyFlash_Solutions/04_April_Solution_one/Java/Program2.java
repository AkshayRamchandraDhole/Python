import java.io.*;
import java.util.*;

class ArrayOps{

	public static void main(String ... nk)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the length of array : ");
		int n = Integer.parseInt(br.readLine());
		int arr1[] = new int[n];
		int arr2[] = new int[n];
		
		System.out.println("Enter Elements For Array 1");
		for(int i=0; i<n; i++)
			arr1[i]=Integer.parseInt(br.readLine());
		
		System.out.println("Enter Elements For Array 2");
		for(int i=0; i<n; i++)
			arr2[i]=Integer.parseInt(br.readLine());

		for(int i=0; i<n; i++){
		int temp = arr1[i];
		arr1[i]	= arr2[i];
		arr2[i] = temp;
	}	


	System.out.printf("After Swapping Elements in First Array and Second Array are\n");

	System.out.printf("\t\tFirst\t\tSecond\n");	
	for(int i=0; i<n; i++){
		System.out.printf("At Index %d = \t%d\t\t%d\n",i,arr1[i],arr2[i]);
	}

	
	}
}

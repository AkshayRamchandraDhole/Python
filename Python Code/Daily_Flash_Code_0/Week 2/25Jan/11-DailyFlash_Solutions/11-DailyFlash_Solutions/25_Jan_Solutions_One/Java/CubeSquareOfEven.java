/*
Program 3: Write a Program to print Cubes and Squares of all Even numbers
ranges between given input number.
Input: 10
Output:
Cube of 2 : 8 and Square of 2 : 4
Cube of 4 : 64 and Square of 4 : 16
.
.
Cube of 10 : 1000 and Square of 10 : 100

*/

import java.io.*;


class CubeSuareOFEven{

	
	public static void main(String args[])throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the number");
		int num = Integer.parseInt(br.readLine());

		
		for(int itr = 1 ; itr <= num ; itr++){

			if(itr%2==0)
				System.out.printf("Cube of %d : %d and Square of %d : %d\n",itr,itr*itr*itr,itr,itr*itr);
		}	

	}	
}	

/*
Program 1: Write a Program to print series of odd numbers ranging between
two numbers entered by user.
Input:
Min of Series : 4
Max of Series: 60
Output: Series Of Odd Numbers Ranging between 4 & 60 is:
5, 7, 9, . . ., 59
*/

import java.io.*;


class OddNumberRange{

	
	public static void main(String args[])throws IOException{


		BufferedReader br =new BufferedReader(new InputStreamReader(System.in));

		System.out.printf("Min of Series : ");
		int lowerlimit = Integer.parseInt(br.readLine());
		System.out.printf("Max of Series : ");
		int upperlimit = Integer.parseInt(br.readLine());


		for(int itr = lowerlimit ; itr < upperlimit ; itr++){

			System.out.println(itr%2!=0?itr:" ");
	
		}	



	}	
}	

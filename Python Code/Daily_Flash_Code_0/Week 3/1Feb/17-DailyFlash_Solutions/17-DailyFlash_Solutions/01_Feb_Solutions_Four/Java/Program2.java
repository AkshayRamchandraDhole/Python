// Java Program to Print even Numbers in Reverse 

import java.util.Scanner;

class ReverseEven {

	public static void main(String[] args) {

		Scanner sc;

		int number, i;
		sc = new Scanner(System.in);

		System.out.print(" Please Enter the Maximum integer Value : ");
		number = sc.nextInt();

		for(i = number; i >= 1; i--) {

			if(i % 2 == 0 ) {

				System.out.print(i +"\t");
			}
		}
				System.out.println();
	}
}


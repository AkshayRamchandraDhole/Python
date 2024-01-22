/*
 * Java Program to Convert the Hours entered by user into
 Seconds.
 */


import java.util.Scanner;

class Hours {

	public static void main(String[] args) {

		long hours;

		Scanner in = new Scanner(System.in);

		System.out.println("Please enter hours:");
		hours = in.nextInt();

		long seconds = hours * 60 * 60;

		System.out.println(seconds + " Seconds");

	}
}

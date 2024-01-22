/* Problem Statement
 * 
 * Write a Program to calculate Velocity of particle in the space having Distance & Time Entered By User
 * */

//Import IO package for input Operations
import java.io.*;

class Velocity {

	public static void main(String[] args)throws IOException {

		//Buffered Reader Object to create input stream for data input
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int dist = 0,time = 0;
		System.out.println("Enter Distance in metres and time in seconds");
		do {
			//Try catch to handle run-time Exception for char input instead of integer
			try {
				//parseint method to convert string to integer
				dist = Integer.parseInt(br.readLine());
				time = Integer.parseInt(br.readLine());
				if(dist <= 0 || time <= 0)
					System.out.println("Enter Positive values Only");

			}
			catch(NumberFormatException o){

				System.out.println("Invalid format, only Integers allowed");
			}
		}while(dist <= 0 || time <= 0 );

		float vel = (float)dist/time;
		System.out.println("The Velocity of a Particle roaming In space is "+vel+" m/s");

	}
}

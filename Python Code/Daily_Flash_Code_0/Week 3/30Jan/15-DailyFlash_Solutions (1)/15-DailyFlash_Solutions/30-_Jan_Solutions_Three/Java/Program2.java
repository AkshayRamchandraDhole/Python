/* Problem Statement
 * 
 * Write a Program that calculates Kinetic Energy of object with given Mass & Velocity.
 * {Note: K.E. = 1⁄2 * m * v * v }
 * */

//Import IO package for input Operations
import java.io.*;

class KineticEnergy {

	public static void main(String[] args)throws IOException {

		//Buffered Reader Object to create input stream for data input
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int mass = 0, velocity = 0;
		float ke = 0;
		do {
			//Try catch to handle run-time Exception for char input instead of integer
			try {

				//parseint method to convert string to integer
				System.out.println("Enter Mass of Object in KG");
				mass = Integer.parseInt(br.readLine());
				System.out.println("Enter Velocity of Object in m/s");
				velocity = Integer.parseInt(br.readLine());

				if(mass <= 0 || velocity <= 0){

					System.out.println("Enter Positive values Only");
				}

			}
			catch(NumberFormatException o){

				System.out.println("Invalid format, only Integers allowed");
			}

		}while(mass <= 0 || velocity == 0);

		ke = (float)(mass*velocity*velocity)/2;
		
		System.out.println("The Kinetic Energy of Object is "+ke);
	}
}

/* Problem Statement
 * 
 * Write a Program to Implement Ohms Law
 * Note: V = I*R, where, v is voltage, I is current & R is resistance
 * */

//Import IO package for input Operations
import java.io.*;

class Volts {

	public static void main(String[] args)throws IOException {

		//Buffered Reader Object to create input stream for data input
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int i = 0,r = 0;
		System.out.println("Enter current in Amperes and Resistance in ohms");
		do {
			//Try catch to handle run-r Exception for char input instead of integer
			try {
				//parseint method to convert string to integer
				i = Integer.parseInt(br.readLine());
				r = Integer.parseInt(br.readLine());
				if(i <= 0 || r <= 0)
					System.out.println("Enter Positive values Only");

			}
			catch(NumberFormatException o){

				System.out.println("Invalid format, only Integers allowed");
			}
		}while(i <= 0 || r <= 0 );

		//Voltage v = Current(i) * Resistance(r)
		int v = i*r;
		System.out.println("The Voltage V = "+v+" volts");

	}
}

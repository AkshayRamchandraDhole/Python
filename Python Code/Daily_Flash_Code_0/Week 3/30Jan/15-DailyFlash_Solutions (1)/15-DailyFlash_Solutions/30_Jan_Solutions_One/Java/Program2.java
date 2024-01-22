

import java.io.*;


class Program2 {

	public static void main(String args[])throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.printf("Enter the mass : ");
		int mass = Integer.parseInt(br.readLine());
		System.out.printf("Enter the velocity : ");
		int velocity = Integer.parseInt(br.readLine());

		System.out.printf("Kinectic Energy : %f",0.5*mass*velocity*velocity);
	}	

}	

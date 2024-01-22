import java.io.*;

class Velocity{

	
	public static void main(String args[])throws IOException{

		BufferedReader br =new BufferedReader(new InputStreamReader(System.in));

		System.out.printf("Distance : ");
		int dist = Integer.parseInt(br.readLine());
		System.out.printf("Time : ");
		int time = Integer.parseInt(br.readLine());

		System.out.println("The Velocity of a Particle roaming in space is "+(dist/time)+"m/s");	

	}	
}	

import java.io.*;

class Map {

	public static void main(String[] args) throws IOException{
			
		float a = 0, b = 0;
		System.out.printf("Enter Distance in mt and time in sec : \n");
		BufferedReader br = new BufferedReader(new InputStreamReader (System.in));

		try {
			a = Float.parseFloat(br.readLine());
			b = Float.parseFloat(br.readLine());
			if(a <= 0 || b <= 0)
				throw new NumberFormatException();
		}
		catch(NumberFormatException n){
			System.exit(0);
		}

		System.out.printf("The Velocity of a Particle rowming in space is %f m/s\n", a/b);
	}
}

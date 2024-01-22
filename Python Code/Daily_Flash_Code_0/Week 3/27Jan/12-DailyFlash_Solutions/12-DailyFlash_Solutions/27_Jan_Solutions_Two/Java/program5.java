import java.io.*;

class Map {

	public static void main(String[] args) throws IOException{
			
		int a = 0, b = 0, c = 0;
		System.out.printf("Enter Numbers : \n");
		BufferedReader br = new BufferedReader(new InputStreamReader (System.in));

		try {
			a = Integer.parseInt(br.readLine());
			b = Integer.parseInt(br.readLine());
			c = Integer.parseInt(br.readLine());
		}
		catch(NumberFormatException n){
			System.exit(0);
		}

		if(a >= b)
			if(a >= c)
				System.out.printf("The maximum number amongst %d %d & %d is %d\n", a,b,c,a);
			else
				System.out.printf("The maximum number amongst %d %d & %d is %d\n", a,b,c,c);
		else if(b >= c)
			System.out.printf("The maximum number amongst %d %d & %d is %d\n", a,b,c,b);
		else
			System.out.printf("The maximum number amongst %d %d & %d is %d\n", a,b,c,c);
	}
}

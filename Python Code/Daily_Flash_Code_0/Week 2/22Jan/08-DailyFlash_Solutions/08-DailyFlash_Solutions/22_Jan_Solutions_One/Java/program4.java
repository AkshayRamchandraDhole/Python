import java.io.*;

class Thread {
	public static void main (String ... kbd) throws IOException{

		int a = 0, b = 0;
		char op = '+';
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter Numbers: \n");
		try{
			a = Integer.parseInt(br.readLine());
			b = Integer.parseInt(br.readLine());
			System.out.printf("Enter Character: \n");
			op = (char)br.read();
			br.skip(1);
		}
		catch(NumberFormatException ne){
			System.out.printf("Invalid\n");
			System.exit(0);
		}

		switch(op){
			case '+':
			      	System.out.printf("Addition : %d\n", a + b);	
				break;
			case '*':
			      	System.out.printf("Multiplication : %d\n", a * b);	
				break;
			case '-':
			      	System.out.printf("Subtraction : %d\n", a - b);	
				break;
			case '/':
					
					if (b == 0) {
						System.exit(0);
					}
			      	System.out.printf("Division : %d\n", a/b);	
				break;

			default:
				System.out.printf("Invalid choice\n");
				break;
		}
	}
}

/* Problem Statement
 * 
 * Write a Program to print table in reverse order.
 * */

//Import IO package for input Operations
import java.io.*;

class Table {

	public static void main(String[] args)throws IOException {

		//Buffered Reader Object to create input stream for data input
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int table = 0,order = 0;
		boolean flag = true,flag2 = true;
		do {
			//Try catch to handle run-r Exception for char input instead of integer
			try {

				//parseint method to convert string to integer
				if(flag2){
					System.out.println("Enter a number to print table of");
					table = Integer.parseInt(br.readLine());
				}

				if(table <= 0){

					System.out.println("Enter Positive values Only");
					flag2 = true;
				}
				else{
				
					flag2 = false;
				}

				if(flag){
					System.out.println("Enter The order of Table");
					System.out.println("1. Normal\n2. Reverse Order");
					order = Integer.parseInt(br.readLine());
				}

				if(order != 0)
					flag = false;

			}
			catch(NumberFormatException o){

				System.out.println("Invalid format, only Integers allowed");
				flag = true;
			}

		}while(table <= 0 || order == 0);

		for(int lc = 1, lc2 = 10; lc <= 10 || lc2 >= 1; lc++,lc2--){

			if(order == 2)
				System.out.println(table+" X "+lc2+" : "+(lc2*table));
			else
				System.out.println(table+" X "+lc+" : "+(lc*table));
		}
	}
}

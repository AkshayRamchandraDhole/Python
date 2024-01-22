/* Problem Statement
 * 
 * Write a Program to print following pattern
 *
 * 7
 * 7 6 
 * 6 5 4
 * 4 3 2 1
 */

class Pattern1 {

	public static void main(String[] args) {

		int x =7;
		for(int olc = 0; olc <= 3 ; olc++){
			for(int ilc = 0; ilc <= olc; ilc++){
				System.out.print(x+"\t");
				x--;
			}
			x++;
			System.out.println();
		}

	}
}

/*    
      Java  Program to Print following Pattern.
      + = + =
      + = +
      + =
      +

*/

class Pattern {

	public static void main(String[] args) {

		int rows = 5;
		for(int i = rows; i >= 1; --i) {
			for(int j = 1; j <= i; ++j) {
				if(j % 2 == 0){
					System.out.print(" = ");
				}
				else{
					System.out.print(" + ");
				}
			}

			System.out.println();
		}
	}
}

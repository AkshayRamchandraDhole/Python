import java.util.*;

class Demo {
	public static void main(String[] args) {
		int m;
		System.out.println("m: ");
		Scanner sc = new Scanner(System.in);
		m = sc.nextInt();
		int [][] arr = new int[m][m];
		System.out.println("Enter arr: ");
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < m; j++) {
				arr[i][j] = sc.nextInt();
			}
		}	
		for(int j = 0; j < 3; j++) {
                arr[0][j] = 2 * arr[0][j] + 3 * arr[1][j];
        }
        for(int j = 0; j < 3; j++) {
                arr[1][j] = 2 * arr[1][j] - arr[2][j];
        }
        for(int j = 0; j < 3; j++) {
                arr[2][j] *= 4;
        }

		System.out.println();
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < m; j++) {
				System.out.print(arr[i][j] + " ");
			}
			System.out.println();
		}	
		
	}
}


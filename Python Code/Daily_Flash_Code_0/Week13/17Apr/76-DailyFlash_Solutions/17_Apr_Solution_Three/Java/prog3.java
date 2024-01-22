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
		for(int i = 0; i < 3; i++) {
                arr[i][2] = 2 * arr[i][2] + arr[i][1];
        }
        for(int i = 0; i < 3; i++) {
                arr[i][1] = 3 * arr[i][1] - arr[i][0];
        }
        for(int i = 0; i < 3; i++) {
                arr[i][2] *= 3;
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


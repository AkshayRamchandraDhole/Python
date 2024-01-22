#include<stdio.h>

int main() {
	int m;
	printf("m: ");
	scanf("%d", &m);
	int arr[m][m];
	printf("Enter arr: ");
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
			scanf("%d", &arr[i][j]);
		}
	}	
	int x = (arr[0][0] * (arr[1][1] * arr[2][1] - arr[1][2] * arr[2][1]));
	int y = (arr[0][1] * (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0]));
	int z = (arr[0][2] * (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]));

	printf("Det: %d", x-y+z);
	
}

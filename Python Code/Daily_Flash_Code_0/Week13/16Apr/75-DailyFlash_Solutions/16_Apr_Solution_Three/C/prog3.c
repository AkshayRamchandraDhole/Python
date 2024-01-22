#include<stdio.h>

int main() {
	int m;
	printf("m: ");
	scanf("%d", &m);
	int arr[m][m];
	printf("Enter arr: ");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < m; j++) {
			scanf("%d", &arr[i][j]);	
		}

	}	

	printf("\n");

	for(int j = 0; j < 3; j++) {
		arr[0][j] = 2 * arr[0][j] + 3 * arr[1][j];
	}
	for(int j = 0; j < 3; j++) {
		arr[1][j] = 2 * arr[1][j] - arr[2][j];
	}
	for(int j = 0; j < 3; j++) {
		arr[2][j] *= 4;
	}
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
			printf("%d ", arr[i][j]);
		
		}
		printf("\n");
	}	
	
}

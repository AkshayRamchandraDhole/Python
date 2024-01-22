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

	for(int i = 0; i < 3; i++) {
		arr[i][2] = 2 * arr[i][2] + arr[i][1];
	}
	for(int i = 0; i < 3; i++) {
		arr[i][1] = 3 * arr[i][1] - arr[i][0];
	}
	for(int i = 0; i < 3; i++) {
		arr[i][2] *= 3;
	}
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
			printf("%d ", arr[i][j]);
		
		}
		printf("\n");
	}	
	
}

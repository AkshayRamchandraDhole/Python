#include<stdio.h>

int main() {
	int m;
	printf("m: ");
	scanf("%d", &m);
	int arr[m][m];
	int tr[m][m];
	printf("Enter arr: ");
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
			scanf("%d", &arr[i][j]);
			tr[j][i] = arr[i][j];
		}
	}	
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
			printf("%d ", tr[i][j]);
		
		}
		printf("\n");
	}	
	
}

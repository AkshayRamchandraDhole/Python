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
			if(j < i)
				arr[i][j] = 0;
		}
	}	
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
			printf("%d ", arr[i][j]);
		
		}
		printf("\n");
	}	
	
}

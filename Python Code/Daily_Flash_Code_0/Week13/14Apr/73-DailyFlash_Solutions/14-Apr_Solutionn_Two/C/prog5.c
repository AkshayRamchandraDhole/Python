#include<stdio.h>

int main() {
	int m;
	printf("m: ");
	scanf("%d", &m);
	int arr1[m][m];
	int arr2[m][m];
	printf("Enter arr1: ");
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
			scanf("%d", &arr1[i][j]);
		}
	}
	int flag = 0;
	printf("Enter arr2: ");
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
			scanf("%d", &arr2[i][j]);
			if(arr1[i][j] != arr2[i][j]) {
				flag = 1;
			}
		}
	}	
	

	if(flag!=1)
	printf("Equal");
	
}

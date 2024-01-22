#include<stdio.h>

int isIdent(int arr[3][3]) {
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			if(i == j && arr[i][j] != 1) {		
				return 0;
			} 
			if(i != j && arr[i][j] != 0) {
				return 0;
			}
		}
	}
	return 1;
}

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
		
	if(isIdent(arr)) {
		printf("Yes");
	}
	
}

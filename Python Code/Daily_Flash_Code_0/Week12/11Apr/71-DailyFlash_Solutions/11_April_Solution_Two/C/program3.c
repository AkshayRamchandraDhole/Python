
#include <stdio.h>

void main () {

	int m,n;
	printf("Row and Column : ");
	scanf("%d%d", &m,&n);
	if(m!=n)
		return;
	int arr[m][n];
	int max = 0, sum = 0;
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			scanf("%d", (*(arr+i)+j));
		}
	}
	for(int i = 0 ; i < m ; i++){
		for(int j = i ; j < n ; j++){
			arr[i][j] = arr[i][j] + arr[j][i] - (arr[j][i] = arr[i][j]);
		}
	}

	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}


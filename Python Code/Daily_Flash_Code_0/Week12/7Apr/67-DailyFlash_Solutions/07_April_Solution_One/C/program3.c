
#include <stdio.h>

void main () {

	int m,n;
	printf("Row and Column : ");
	scanf("%d%d", &m,&n);
	int arr[m][n];
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			scanf("%d", (*(arr+i)+j));	
		}
	}

	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			if(i==j)
				printf("%d ", *(*(arr+i)+j));	
		}
	}
	printf("\n");
}

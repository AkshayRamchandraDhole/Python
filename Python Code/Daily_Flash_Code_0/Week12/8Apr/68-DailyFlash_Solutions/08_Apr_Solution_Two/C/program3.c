
#include <stdio.h>

void main () {

	int m,n;
	printf("Row and Column : ");
	scanf("%d%d", &m,&n);
	int arr[m][n];
	int max = 0, sum = 0;
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			scanf("%d", (*(arr+i)+j));
			if(arr[i][j] % 2 == 1 && max < arr[i][j]){
				max = arr[i][j];
			}
			else if(arr[i][j]%2 == 0){
				sum = sum + arr[i][j];
			}	
		}
	}
	printf("Output : %d \n", max * sum);
}
